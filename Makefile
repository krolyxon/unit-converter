CC = gcc
CFLAGS = -Wall -g
TARGET = main

all:$(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

uninstall:
	rm -f $(TARGET)

clean:
	rm -f $(TARGET)
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

