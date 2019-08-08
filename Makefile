CFLAGS = -O
CC = g++
SRC = main.cpp location.cpp locationManager.cpp station.cpp motor/motorManager.cpp
OBJ = $(SRC:.cpp = .o)

Test: $(OBJ)
	$(CC) $(CFLAGS) -o test $(OBJ)

clean:
	rm -f core *.o
