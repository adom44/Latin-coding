CC = gcc
CFLAGS = -std=c99 -Werror -Wextra
LATIN = ../latin.h

terra-apocalipsi: terra-apocalipsi.c $(LATIN)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f terra-apocalipsi
