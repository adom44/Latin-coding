CC = gcc
CFLAGS = -std=c99 -Werror -Wextra
LATIN = ../latin.h

calculator: calculator.c $(LATIN)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f calculator
