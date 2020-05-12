#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 *
 * wait() ensures the parent allows the child to finish executing before 
 * it finishes. This makes the output deterministic.
 * 
 */

int main(){
	printf("Ran once!\n");

	int cp = fork();

	printf("process running (pid: %d)\n", (int) getpid());
	

	if(cp < 0){
		fprintf(stderr, "fork failed\n");
	}
	else if(cp == 0){
		printf("Child process (pid: %d)\n", (int) getpid());
	}
	else{
		wait(NULL);
		printf("Parent process (pid %d) of child (pid %d)\n", (int) getpid(), cp);
	}

	return 0;
}
