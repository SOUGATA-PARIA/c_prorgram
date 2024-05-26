#include <stdio.h>
#include <stdlib.h>
int main (){
    int* ptr = (int*) malloc(5*sizeof(int));
    printf("%p\n",ptr);
    ptr = realloc(ptr,10*sizeof(int));
    printf("%p\n",ptr);
}