CC = gcc
CFLAGS = -std=c99 -Werror -Wextra
LATIN = ../latin.h

example: example.c $(LATIN)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f example
