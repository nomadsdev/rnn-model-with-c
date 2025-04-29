CC = gcc
CFLAGS = -Wall -Iinclude
SRC = main.c src/rnn.c src/utils.c
TARGET = rnn

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f rnn