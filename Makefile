# Makefile

S_CC     = g++

CFLAG    = -O3 -std=c++11 -Wall

all:
	$(S_CC) $(CFLAG) main.cpp
