CFLAGS = -O
CC = g++

Loc: main.o location.o
	$(CC) $(CFLAGS) -o test main.o location.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

location.o: location.cpp
	$(CC) $(CFLAGS) -c location.cpp

clean:
	rm -f core *.o

