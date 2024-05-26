#include <stdio.h>
void swap (int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main ()
{
    int a,b;

    // taking input from user for the values of a and b

    printf("Please enter the value of first number a : ");
    scanf("%d",&a);
    printf("Please enter the value of second number b : ");
    scanf("%d",&b);

    int* x = &a;
    int* y = &b;

    swap(x,y);
    printf("now the value of a is : %d\n",a);
    printf("now the value of b is : %d",b);

    return 0;
}