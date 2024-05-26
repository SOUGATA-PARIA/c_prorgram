#include <stdio.h>
#include <stdlib.h>
int main (){
    int* ptr1 = (int*) malloc(10*sizeof(int));
    int* ptr2 = (int*) calloc(10,sizeof(int));
    printf("%d\n",ptr1);
    printf("%d\n",ptr2);
    return 0;
}