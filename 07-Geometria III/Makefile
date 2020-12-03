BIN = PunterosTest.exe
OBJ = PunterosTest.o Punteros.o
CC = g++
CFLAGS = -std=c++17
RM = -rm


$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

PunterosTest.o: PunterosTest.cpp Punteros.h
	$(CC) -c PunterosTest.cpp -o PunterosTest.o $(CFLAGS)

Punteros.o: Punteros.cpp Punteros.h
	$(CC) -c Punteros.cpp -o Punteros.o $(CFLAGS)

.PHONY: clean
clean:
	$(RM) $(OBJ) $(BIN)