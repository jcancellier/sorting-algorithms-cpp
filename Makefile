CC=g++
CFLAGS=-Wall -std=c++11
RM =rm -f
BUILD_DIR=build
ALGORITHMS=algorithms/*
UTILS=utils/*.h
CPP_FILES=main.cpp $(ALGORITHMS) $(UTILS)

all: run

run: main
	./$(BUILD_DIR)/main

main: $(CPP_FILES)
	$(CC) $(CFLAGS) main.cpp -o build/main

clean:
	$(RM) main
