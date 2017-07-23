/*
 * sh1.c: sample version 1 of a UNIX command shell/interpreter.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char line[256];
    char prompt[] = "SimpleShell: Enter command or exit % ";

    /* spit out the prompt */
    printf("%s", prompt );

    /* Try getting input. If error or EOF, exit */
    while( fgets(line, sizeof line, stdin) != NULL )
    {
	/* fgets leaves '\n' in input buffer. ditch it */
	line[strlen(line)-1] = '\0';
	
	//printf("checking exit condition");
	if(strcmp(line,"exit") == 0){
       		break;
	}
	else {
		//fork process to handle command
		//if child, handle command
		if(!fork()){
		
			//call exec with input commands
      			execlp(line, line, NULL);
		}
		//if parent, wait for child
		else{
			wait(1);
		}
    	}	
	
	printf("%s", prompt );
    }

    return 0;
}
