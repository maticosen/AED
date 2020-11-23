BIN = FlujosTest.exe
OBJ = FlujosTest.o Flujos.o
CC = g++
CFLAGS = -std=c++17
RM = -rm


$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

FlujosTest.o: FlujosTest.cpp Flujos.h
	$(CC) -c FlujosTest.cpp -o FlujosTest.o $(CFLAGS)

Flujos.o: Flujos.cpp Flujos.h
	$(CC) -c Flujos.cpp -o Flujos.o $(CFLAGS)

.PHONY: clean
clean:
	$(RM) $(OBJ) $(BIN)