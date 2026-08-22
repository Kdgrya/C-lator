all: main.o calculadora.o
	gcc main.o calculadora.o -o main

main.o: main.c calculadora.h calculadora.c
	gcc -c main.c

calculadora.o: calculadora.h calculadora.c
	gcc -c calculadora.c 

clean: 
	rm *.o
	rm main