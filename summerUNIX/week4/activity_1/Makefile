# Makefile for simple-hole.c
#!
CC=gcc
CFLAGS=-l
DEPS=apue.h
%.o:%.c $(DEPS)
	$(CC)-c -o $@ $< $(CFLAGS)
simple-hole:simple-hole.c apue.h
	gcc -o simple-hole simple-hole.c apue.h
simple-cat:simple-cat.c apue.h
        gcc -o simple-cat simple-cat.c apue.h
simple-ls:simple-ls.c apue.h
	gcc -o simple-ls simple-ls.c apue.h
simple-chmod:simple-chmod.c apue.h
        gcc -o simple-chmod simple-chmod.c apue.h
simple-ls2:simple-ls2.c apue.h
        gcc -o simple-ls2 simple-ls2.c apue.h

