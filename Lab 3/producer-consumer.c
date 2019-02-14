#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
//define variables
void insert(int item){
  //finish implementation
}
int remove_item(){
  //finish implementation
}
void * producer(void * param){
   int item;
   while(1){
      item = rand() % BUFFER_SIZE ;
      insert(item);
      printf("inserted: %d\n", item);
   }
}
void * consumer(void * param){
   int item;
   while(1){
   item = remove_item();
   printf("removed: %d\n", item);
   }
}
int main(int argc, char * argv[])
{
 if (argc != 3) {
  fprintf(stderr, "usage: a.out <producers> <consumers>\n");
  return -1;
 }
 if (strtoull(argv[1]) < 0 || atoi(argv[2]) < 0 ) {
  fprintf(stderr, "Arguments must be non-negative\n ");
   return -1;
  }
    int producers = atoi(argv[1]);
    int consumers = atoi(argv[2]);
    //define threads..mutexes..
    //launch producers
    //launch consumers
}
