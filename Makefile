
CC = g++
FILES = finance.cpp
BIN = main
FLAGS = -pedantic -Wall -std=c++11

build: $(FILES)
	$(CC) -o $(BIN) $(FLAGS) $(FILES)
