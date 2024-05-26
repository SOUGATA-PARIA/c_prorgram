#include <stdio.h>
int main ()
{
    printf("please enter a number with floating point");
    float a;
    scanf("%f",&a);
    int b;
    b=a;
    float c = a-b;
    printf("\n the floating point of the provided number is : %f",c);
    return 0;
}