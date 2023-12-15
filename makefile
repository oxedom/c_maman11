game:	doll.o
		gcc -ansi -Wall doll.o -o runner_1
doll.o:	 doll.c
		gcc -c -ansi -Wall doll.c 