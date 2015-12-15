#
# Makefile
#
# Computer Science 50
# Problem Set 3
#

all: find generate

find: find.c helpers.c helpers.h cs50.c cs50.h
	clang -ggdb3 -O0 -std=c11 -L /Users/serenity/Documents/CS50x/set_3/find -Wall -Werror -o find find.c helpers.c -lcs50 -lm 

generate: generate.c cs50.c cs50.h
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o generate generate.c 

clean:
	rm -f *.o a.out core find generate
