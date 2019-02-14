#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

    printf(argc);
    printf(argv[0]);

    while(1){
        printf("Shell->");
        readLine(line);
        parseLine(line, argv);
        if(strcmp(argv[0], "exit") == 0){
            exit(0);
        }
        else if(strcmp(argv[0], "help") == 0){
            ...
        }
        else if(strcmp(argv[0], "history") == 0){
            ...
        }
        else if(strcmp(argv[0], "cd") == 0){
            ...
        }
        else{
            execute(argv);
        }
    }
}

void execute(argv){

}