
CC = g++

TARGET = Deque

CFLAGS = -c -Wall -Wextra

SRC = main.cpp Deque.cpp
OBJ = main.o Deque.o

all: $(TARGET)

$(TARGET):$(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

main.o: main.cpp Deque.h
	$(CC) $(CFLAGS) main.cpp -o main.o

Deque.o: Deque.cpp Deque.h
	$(CC) $(CFLAGS) Deque.cpp -o Deque.o

clean:
	rm -f $(OBJ) $(TARGET) *~
