#include <stdio.h>
#include <stdlib.h>
int main (){
    int* ptr = (int*) malloc(10*sizeof(int));
    // to free the memory you have to use free() function
    free(ptr);
    //just to free the memory is not only okk you must give the ptr NULL address
    ptr = NULL;
    printf("%p",ptr);
    // one more important thing is that when you free the memoty take a special notice that  
    // the  pointer which is being going to be used to free memory that pointer is at the initial position
    return 0;
}