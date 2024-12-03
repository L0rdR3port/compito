all: main

main: main.o math.o pow.o
	gcc -o main main.o math.o pow.o

main.o: main.c math.h pow.h
	gcc -c -o main.o main.c

math.o: math.c math.h
	gcc -c -o math.o math.c

pow.o: pow.c pow.h
	gcc -c -o pow.o pow.c