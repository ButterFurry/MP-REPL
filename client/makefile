

TARGET       := build/configurator
SRC          := configurator.c
CFLAGS       := -Wall -Wextra -O2

CC_NATIVE    := gcc
CC_WIN       := x86_64-w64-mingw32-gcc

.PHONY: all windows clean run

all: $(TARGET)

build:
		mkdir -p build


# native build (Linux/macOS)
$(TARGET): $(SRC) | build
	$(CC_NATIVE) $(CFLAGS) -o $(TARGET) $(SRC)

windows: $(SRC) | build
	$(CC_WIN) $(CFLAGS) -o $(TARGET).exe $(SRC) -lws2_32

clean:
	rm -rf build

run: $(TARGET)
	./$(TARGET) $(IP) $(ARGS)