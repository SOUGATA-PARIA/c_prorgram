#include <stdio.h>
int main (){
    int a = 5;
    int b = 5;
    int* x = &a;
    printf("%p\n",&a);
    printf("%p\n",&b);// %p is used to print the address of a variable
    printf("%p\n",x);//printing the address of a;
    printf("%p\n",&x);// Printing the address of x;
    printf("%d\n",*x);//printing the value of the variable which is pointer x is pointing

    // int a = 7;
    // int* x = &a;
    // *x = 25;
    // //printf("%d",a);
    // printf("%d\n",*x);
    return 0;
}