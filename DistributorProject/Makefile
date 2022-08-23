##Test--------------

CC = g++
CFLAGS  = -g -Wall -std=c++14

INCLUDES = -I.
LFLAGS = -lm

OBJ = Square.o Can.o Drink.o Distributor.o main.o 
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJ)
		$(CC) $(CFLAGS) $(LFLAGS) $(OBJ) -o $(TARGET)

main.o: main.cpp Distributor.h 
		$(CC) $(CFLAGS) $(INCLUDES) -c main.cpp -o main.o

Distributor.o: Distributor.cpp Distributor.h
		$(CC) $(CFLAGS) $(INCLUDES) -c Distributor.cpp -o Distributor.o

Drink.o: Drink.cpp Drink.h
		$(CC) $(CFLAGS) $(INCLUDES) -c Drink.cpp -o Drink.o

Can.o: Can.cpp Can.h
		$(CC) $(CFLAGS) $(INCLUDES) -c Can.cpp -o Can.o

Square.o: Square.cpp Square.h
		$(CC) $(CFLAGS) $(INCLUDES) -c Square.cpp -o Square.o


clean:
		rm -f *~ *.o main