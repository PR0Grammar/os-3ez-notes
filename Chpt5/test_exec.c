#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){
    printf("Executes once\n");

    int cp = fork();

    if(cp < 0){
        fprintf(stderr, "cp fork failed\n");
    }
    else if(rc == 0){
        printf("Child process pid: %d\n", (int) getpid());
        char *myargs[3];
        myargs[0] = strdup("wc"); // word count program
        myargs[1] = strdup("Chpt_5_notes.md"); // File for word count
        myargs[2] = NULL; //End of arr

        execvp(myargs[0], myargs); // Run word count with args
        printf("This won't print");
    }
    else{
        wait(NULL); // Wait for child process to finish
        printf("Parent process pid: %d", (int) getpid());
    }

    return 0;
}
