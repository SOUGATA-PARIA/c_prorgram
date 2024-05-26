#include <stdio.h>
int power(int a,int b)
{
    if(b==0) return 1;
    int pow = a*power(a,b-1);
    return pow;
}
int main ()
{
    int a,b;
    printf("please enter the base value : ");
    scanf("%d",&a);
    printf("please enter the exponent value : ");
    scanf("%d",&b);
    int pow = power(a,b);
    printf("the value of %d raised to the power %d = %d",a,b,pow);
    return 0;
}