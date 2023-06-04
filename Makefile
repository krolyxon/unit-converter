CC = gcc
CFLAGS = -Wall -g
TARGET = main

all:$(TARGET)

$(TARGET): ./src/$(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) ./src/$(TARGET).c ./src/utils.c
uninstall:
	rm -f $(TARGET)

clean:
	rm -f $(TARGET)
	$(CC) $(CFLAGS) -o $(TARGET) ./src/$(TARGET).c ./src/utils.c

