SRC=./src
OBJ=./obj
BIN=./bin
HEADERS="./headers"

CC:=gcc
CFLAGS:=-c -g -I$(HEADERS)

all: $(OBJ)/main.o $(OBJ)/merge.o $(OBJ)/bsort.o
	$(CC) $(OBJ)/main.o $(OBJ)/merge.o $(OBJ)/bsort.o -o $(BIN)/glm_sort

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(CFLAGS) $(SRC)/main.c -o $(OBJ)/main.o
$(OBJ)/merge.o: $(SRC)/merge.c
	$(CC) $(CFLAGS) $(SRC)/merge.c -o $(OBJ)/merge.o
$(OBJ)/bsort.o: $(SRC)/bsort.c
	$(CC) $(CFLAGS) $(SRC)/bsort.c -o $(OBJ)/bsort.o


clean:
	rm -v $(OBJ)/main.o $(OBJ)/merge.o $(OBJ)/bsort.o $(BIN)/glm_sort
