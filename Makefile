
all:
	make clear
	make latin
	make calculator

latin:
	gcc -std=c99 -Werror -Wextra latin.h example.c -o latin

calculator:
	gcc -std=c99 -Werror -Wextra latin.h calculator.c -o calculator

clear:
	rm -f latin
	rm -f calculator