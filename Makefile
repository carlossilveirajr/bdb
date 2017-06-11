CC=g++ -o
SRC=src/bdb.cpp

all:
	${CC} bdb ${SRC}

clean:
	rm -f bdb