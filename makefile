all: sieve.o
	gcc sieve.o -lm

sieve.o: sieve.c 
	gcc -c sieve.c

run:
	./a.out

clean:
	rm *.o

