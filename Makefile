
lamas: lamas.c
	gcc -o lamas lamas.c -lm
	./lamas

run: lamas
	./lamas