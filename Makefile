CC=g++ -o
SRC=./src/bdb.cpp ./src/data/Float.cpp ./src/data/Type.cpp ./src/data/DataConvert.cpp ./src/container/Containers.cpp ./src/container/Container.cpp ./src/container/ContainerConverter.cpp

all:
	${CC} bdb ${SRC}

clean:
	rm -f bdb