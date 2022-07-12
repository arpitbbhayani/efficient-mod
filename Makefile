assembly: and.c mod.c
	gcc -S -o and.s and.c
	gcc -S -o mod.s mod.c

build:	and.c main.c mod.c
	gcc *.c -o a.out
