CC:=gcc
CFLAGS:=-c

all: merge

merge.o: merge.c
	$(CC) $(CFLAGS) merge.c

merge: merge.o
	$(CC) merge.o -o merge

clean:
	rm -v merge.o merge
