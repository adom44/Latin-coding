
all:
	make clear
	make latin

latin:
	gcc -std=c99 -Werror -Wextra latin.h example.c -o latin

clear:
	rm -f latin