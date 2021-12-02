big3.exe:big3.o factorial.o
	gcc -o big3.exe big3.o factorial.o
big3.o:big3.c
	gcc -c big3.c
factorial.o:factorial.c
	gcc -c factorial.c
