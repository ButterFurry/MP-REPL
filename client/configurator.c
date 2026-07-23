#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
    #include <winsock2.h>
    #include <ws2tcpip.h>
    #pragma comment(lib, "ws2_32.lib")
    typedef SOCKET sock_t;
    #define CLOSESOCK closesocket
#else
    #include <unistd.h>
    #include <errno.h>
    #include <arpa/inet.h>
    #include <sys/socket.h>
    #include <netinet/in.h>
    typedef int sock_t;
    #define CLOSESOCK close
    #define INVALID_SOCKET (-1)
    #define SOCKET_ERROR (-1)
#endif

#define DEFAULT_PORT 2323
#define BUF_SIZE 512

static void net_init(void) {
#ifdef _WIN32
    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        fprintf(stderr, "WSAStartup failed\n");
        exit(1);
    }
#endif
}

static void net_cleanup(void) {
#ifdef _WIN32
    WSACleanup();
#endif
}

static sock_t connect_to(const char *ip, int port) {
    sock_t sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == INVALID_SOCKET) {
        fprintf(stderr, "socket() failed\n");
        exit(1);
    }

    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons((unsigned short)port);

    if (inet_pton(AF_INET, ip, &addr.sin_addr) != 1) {
        fprintf(stderr, "Invalid IP address: %s\n", ip);
        exit(1);
    }

    if (connect(sock, (struct sockaddr *)&addr, sizeof(addr)) == SOCKET_ERROR) {
        fprintf(stderr, "connect() failed\n");
        exit(1);
    }

    return sock;
}


static void send_command(sock_t sock, const char *cmd) {
    char line[BUF_SIZE];
    snprintf(line, sizeof(line), "%s\n", cmd);
    if (send(sock, line, (int)strlen(line), 0) == SOCKET_ERROR) {
        fprintf(stderr, "send() failed\n");
        return;
    }

    char verb[16] = {0};
    sscanf(cmd, "%15s", verb);
    int multi_line = (strcasecmp(verb, "LIST") == 0);

    char buf[BUF_SIZE];
    int n;
    while ((n = recv(sock, buf, sizeof(buf) - 1, 0)) > 0) {
        buf[n] = '\0';
        fputs(buf, stdout);
        if (!multi_line) break;
        if (strstr(buf, "END\n")) break;
    }
    if (n == SOCKET_ERROR) fprintf(stderr, "recv() failed\n");
}

static void print_usage(const char *prog) {
    fprintf(stderr,
        "Usage:\n"
        "  %s <pico-ip> [port]                     interactive mode\n"
        "  %s <pico-ip> <CMD> [args...]             one-shot mode\n"
        "\nCommands: GET <key> | SET <key> <value> | LIST\n",
        prog, prog);
}

#ifdef _WIN32
#include <string.h>
#ifndef strcasecmp
#define strcasecmp _stricmp
#endif
#endif

int main(int argc, char *argv[]) {
    if (argc < 2) {
        print_usage(argv[0]);
        return 1;
    }

    net_init();

    const char *ip = argv[1];
    int port = DEFAULT_PORT;

    if (argc >= 3) {
        char cmdline[BUF_SIZE] = {0};
        for (int i = 2; i < argc; i++) {
            strncat(cmdline, argv[i], sizeof(cmdline) - strlen(cmdline) - 2);
            if (i != argc - 1) strncat(cmdline, " ", sizeof(cmdline) - strlen(cmdline) - 2);
        }

        sock_t sock = connect_to(ip, port);
        send_command(sock, cmdline);
        CLOSESOCK(sock);
        net_cleanup();
        return 0;
    }

    sock_t sock = connect_to(ip, port);
    printf("Connected to %s:%d. Type commands (GET/SET/LIST), Ctrl+D to quit.\n", ip, port);

    char input[BUF_SIZE];
    while (1) {
        printf("> ");
        fflush(stdout);
        if (!fgets(input, sizeof(input), stdin)) break;

        input[strcspn(input, "\n")] = '\0';
        if (strlen(input) == 0) continue;

        send_command(sock, input);
    }

    CLOSESOCK(sock);
    net_cleanup();
    printf("\nDisconnected.\n");
    return 0;
}