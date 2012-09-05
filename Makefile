CFLAGS=-Wall -g

all: ex1 ex3 ex4 ex5 ex6 ex7 ex8

ex1:
	cc $(CFLAGS) ex1.c -o ex1

ex3:
	cc $(CFLAGS) ex3.c -o ex3

ex4:
	cc $(CFLAGS) ex4.c -o ex4

ex5:
	cc $(CFLAGS) ex5.c -o ex5

ex6:
	cc $(CFLAGS) ex6.c -o ex6

ex7:
	cc $(CFLAGS) ex7.c -o ex7

ex8:
	cc $(CFLAGS) ex8.c -o ex8

clean:
	rm -rf ex{1,3,4,8} *.dSYM
