CFLAGS = -Wall
CC = g++
LIBPATH =  /home/a7kntr/pod/lib/
SRC = main.cpp location.cpp locationManager.cpp station.cpp
OBJ = $(SRC:.cpp = .o)

Test: $(OBJ)
	$(CC) -L$(LIBPATH) $(CFLAGS) -lTest -o test $(OBJ)
clean:
	rm -f core *.o
