CC = gcc
CFLAGS = -Wall -g
TARGET = main

all:$(TARGET)

$(TARGET): $(TARGET).c utils.c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c utils.c currency.c unit.c mass.c length.c temp.c

uninstall:
	rm -f $(TARGET)

clean:
	rm -f $(TARGET)
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c utils.c currency.c unit.c mass.c length.c temp.c

