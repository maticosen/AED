BIN = ColorTest.exe
OBJ = ColorTest.o Color.o
CC = g++
CFLAGS = -std=c++17
RM = rm


$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

ColorTest.o: ColorTest.cpp Color.h
	$(CC) -c ColorTest.cpp -o ColorTest.o $(CFLAGS)

Color.o: Color.cpp Color.h
	$(CC) -c Color.cpp -o Color.o $(CFLAGS)

.PHONY: clean
clean:
	$(RM) $(OBJ) $(BIN)