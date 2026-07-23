import socket
import settings

PORT = 2323


def run(nic=None, port=PORT):
    addr = socket.getaddrinfo("0.0.0.0", port)[0][-1]
    s = socket.socket()
    s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    s.bind(addr)
    s.listen(1)
    print("Config server listening on port", port)

    while True:
        try:
            conn, remote = s.accept()
            conn.settimeout(30)
            f = conn.makefile("rwb")
            while True:
                line = f.readline()
                if not line:
                    break
                line = line.decode().strip()
                if not line:
                    continue
                parts = line.split(None, 2)
                cmd = parts[0].upper()

                if cmd == "GET" and len(parts) >= 2:
                    val = settings.get(parts[1], "")
                    conn.write(("{}={}\n".format(parts[1], val)).encode())

                elif cmd == "SET" and len(parts) >= 3:
                    settings.set(parts[1], parts[2])
                    conn.write(b"OK\n")

                elif cmd == "LIST":
                    for k, v in settings.all_items().items():
                        conn.write(("{}={}\n".format(k, v)).encode())
                    conn.write(b"END\n")

                else:
                    conn.write(b"ERR unknown command\n")
            conn.close()
        except OSError as e:
            print("config server error:", e)