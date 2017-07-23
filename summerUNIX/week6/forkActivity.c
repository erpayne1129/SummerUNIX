// Ethan Payne
// CS 3376.0W1
// Week 6 Activity: fork

// Write a simple C or C++ program to call fork() and print a message with its PID
// Cases:
// Case1. fork(); // followed by a print statement
// Case2. fork(); fork(); // followed by a print statement
// Case3. fork(); fork(); fork(); // followed by a print statement
// Case4.
//	if (pid=fork() && pid2 = fork()) {fork();}
//	if (pid=fork() && pid2 = fork()) {fork();}
//      if (pid=fork() && pid2 = fork()) {fork();}
//	followed by a print statement
// Case 5.
//	for (int i=1; i<=5; i++) {fork();}
//	followed by a print statement

#include <stdio.h>
#include <unistd.h>

int main(){
	int pid, pid2;
	int cas;
	
	// Prompt for which case to run
	printf("Choose a case to run(1-5): ");
	scanf("%d", &cas);
	


	// Validate input
	while((cas < 1) || (cas > 5)){
		printf("Case must be 1-5: ");
		scanf("%d", &cas);
	}
	
	//printf("You entered %d", cas);

	// Option for each case
	// First case
	if(cas == 1){
		fork();
		pid = getpid();
		printf("Proccess PID: %d\n", pid);
	}
	// Second case
	else if(cas == 2){
		fork();
		fork();
		pid = getpid();
		printf("Proccess PID: %d\n", pid);
	}
        // Third case
	else if(cas == 3){
		fork();
		fork();
		fork();
		pid = getpid();
		printf("Proccess PID: %d\n", pid);
	}
	// Fourth case
	else if(cas == 4){
		if ((pid=fork()) && (pid2=fork())) {fork();}
		if ((pid=fork()) && (pid2=fork())) {fork();}
		if ((pid=fork()) && (pid2=fork())) {fork();}
		pid = getpid();
		printf("Proccess PID: %d\n", pid);
	}
	// Fifth case
	else{
		for (int i=1; i<=5; i++) {fork();}
		pid = getpid();
		printf("Proccess PID: %d\n", pid);
	}

	return 0;
}

