#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void execute(char argc[]){
    pid_t pid;
    /* fork a child process */
    pid = fork();

    if (pid < 0) { /* error occurred */
        fprintf(stderr, "Fork Failed");
        exit(-1);
    }

    else if (pid == 0) { /* child process */
        execlp("/bin/ls", "ls", NULL);
    }
    else { 
    /* parent process */
    /* parent will wait for the child to complete */
        wait(NULL);
        printf("Child Complete!\n");
        exit (0);
    }

}

void readLine(char * line){
    printf("Reading Line");
    printf(sizeof line);
    if (fgets(line, sizeof line, stdin) == NULL)
    {
            puts("EOF Occurred");
    }

    
    
}

void parseLine(char * line, char * argv ){
    printf("Parsing Line");

}


int main(int argc, char * argv) {

    //printf(&argc);
    //printf(argv[0]);
    char * line;
    while(1){
        printf("Shell->");
        readLine(line);
        printf("It got past here");
        parseLine(line, argv);
        if(strcmp(argv[0], "exit") == 0){
            exit(0);
        }
        else if(strcmp(argv[0], "help") == 0){
            exit(0);
        }
        else if(strcmp(argv[0], "history") == 0){
            exit(0);
        }
        else if(strcmp(argv[0], "cd") == 0){
            exit(0);
        }
        else{
            execute(argv);
        }
    }
}

