/*
 * lscat.c
 * Combination of simple-ls.c and simple-cat.c.
 * ./lscat .
 */

#include <sys/types.h>

#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv) {

	system("ls ./|grep .c$|cat");
	
	return(0);
}

