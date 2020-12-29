CC=g++

CFLAGS=-Wall -W -pedantic

calculator: calc.o
	g++ calc.o -o calculator

calc.o: calc.cpp
	g++ -c calc.cpp

clean:
	rm *.o calculator
