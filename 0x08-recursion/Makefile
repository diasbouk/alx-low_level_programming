# Makefile for c code.
CC = gcc
# flags
CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89
OBJECTS = main.c 3-factorial.c

# adding c file and main
#add $(object):
#OBJECTS = main.c object

#compiling Files
compile:$(OBJECTS)
gcc $(CFLAGS) $(OBJECTS) -o run

#cleaning
clean:
rm run