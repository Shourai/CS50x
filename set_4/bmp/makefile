# http://stackoverflow.com/questions/1484817/how-do-i-make-a-simple-makefile-for-gcc-on-linux

TARGET = whodunit

LIBS = -lm
CC=clang
CFLAGS=-ggdb3 -O0 -std=c11 -Wall -Werror

HEADERS = bmp.h
OBJECTS = whodunit.c

default: $(TARGET)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) $< -o $@

$(TARGET): $(OBJECTS) 
	$(CC) $(OBJECTS) $(LIBS) -o $@ 

clean:
	rm -f *.o
	rm -f $(TARGET)
