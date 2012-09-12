CFLAGS=-Wall -g

all: ex1 ex3 ex4 ex5 ex6 ex7 ex8 ex9 ex10 ex11

clean:
	find . -depth 1 \
		\( -type f -name "ex*" \! -name "ex*.c" \) -or \
		\( -type d -name "*.dSYM" \) \
		| xargs rm -r