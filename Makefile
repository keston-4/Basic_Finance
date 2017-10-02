# COSC326
# Etude 1: Ants on a Plane
# Shaun Kerr and Kurt Weston
# ===
# Makefile

CC = g++
FILES = finance.cpp
BIN = main
FLAGS = -pedantic -Wall -std=c++11

build: $(FILES)
	$(CC) -o $(BIN) $(FLAGS) $(FILES)
