#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/*
 *
 * The child process acts in a way that it had called fork() itself. In other words, it does
 * not begin from the start of main but rather, where it has been created.
 *
 * The OS creates a near exact copy of the parent process.
 *
 * The parent does not wait for the child to finish - both processes are executed concurrently (therefore output is not deterministic)
 *
 *
 *
 * */

int main(){
	printf("Only ran by parent!\n");

	int rc = fork();
	
	printf("process (pid: %d)\n", (int) getpid());

	if(rc < 0){
		fprintf(stderr, "fork failed\n");
		exit(1);
	}
	else if(rc == 0){
		printf("Child process (pid: %d)\n", (int) getpid());
	}
	else{
		printf("Parent process (pid: %d) of child (pid: %d)\n", (int) getpid(), rc);
	}


	return 0;
}

