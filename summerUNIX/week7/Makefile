# Makefile for simple-sh.c, nice.c, times1.c, simple1-sh.c
#!
CFLAGS=-l
all: simple-sh simple-sh1 nice times1

simple-sh:simple-sh.c apue.h
	gcc -o simple-sh simple-sh.c apue.h
simple-sh1:simple-sh1.c apue.h
	gcc -o simple-sh1 simple-sh1.c apue.h
nice:nice.c error.c apue.h
	gcc -o nice nice.c error.c apue.h
times1:times1.c	error.c prexit.c apue.h 
	gcc -o times1 times1.c error.c prexit.c apue.h

