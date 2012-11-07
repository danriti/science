all: hash.c
	gcc hash.c -o hash.out
	gcc -std=c99 collision.c -o collision.out

.PHONY: clean
clean:
	rm *.out
