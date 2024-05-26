#include <stdio.h>
int power(int a,int b)
{
    int result;
    if (b==0) return 1;
    if (a==0) return 0;
    int x = power(a,b/2);
    if(b%2==0)
    {
        result = x*x;
    }
    else 
    {
        result = x*x*a;
    }
    return result;
}
int main ()
{
    int base,exponent;
    printf("please enter the base number : ");
    scanf("%d",&base);

    printf("please enter the exponent number : ");
    scanf("%d",&exponent);

    int result = power(base,exponent);
    printf("the %d raise to the power %d is = %d .\n",base,exponent,result);
    return 0;
}