BIN = PuntoTest.exe
OBJ = PuntoTest.o Punto.o
CC = g++
CFLAGS = -std=c++17
RM = rm


$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

PuntoTest.o: PuntoTest.cpp Punto.h
	$(CC) -c PuntoTest.cpp -o PuntoTest.o $(CFLAGS)

Punto.o: Punto.cpp Punto.h
	$(CC) -c Punto.cpp -o Punto.o $(CFLAGS)

.PHONY: clean
clean:
	$(RM) $(OBJ) $(BIN)