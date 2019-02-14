#include <pthread.h> 
#include <stdio.h>
double pi; /* this data is shared by the thread(s) */
void * runner(void * param); /* the thread */
int main(int argc, char * argv[]) {
        /* the thread identifier */
	...
        /* set of attributes for the thread */
	...

        if (argc != 3) {
            fprintf(stderr, "usage: a.out <iterations> <threads>\n");
            /*exit(1);*/
            return -1;
        }
        if (atoi(argv[1]) < 0 || atoi(argv[2]) < 0) {
            fprintf(stderr, "Arguments must be non-negative\n ");
                /*exit(1);*/
                return -1;
            }
            /* get the default attributes */
            ...
            /* create threads */
            ...
            /* now wait for the threads to exit */
            ...
            printf("pi = %.15f\n", pi);
        }
        /**
         * The thread will begin control in this function
         */
        void * runner(void * param) {
            int i, upper = atoi(param);
            pi = 1;

            //complete function

            pthread_exit(0);
        }