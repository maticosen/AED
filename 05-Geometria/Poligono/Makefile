BIN = PoligonoTest.exe
OBJ = PoligonoTest.o Poligono.o
CC = g++
CFLAGS = -std=c++17
RM = rm


$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

PoligonoTest.o: PoligonoTest.cpp Poligono.h
	$(CC) -c PoligonoTest.cpp -o PoligonoTest.o $(CFLAGS)

Poligono.o: Poligono.cpp Poligono.h
	$(CC) -c Poligono.cpp -o Poligono.o $(CFLAGS)

.PHONY: clean
clean:
	$(RM) $(OBJ) $(BIN)