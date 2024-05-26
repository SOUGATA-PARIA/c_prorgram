#include <stdio.h>
int factorial (int n)
{
    /*int i;
    int res  = 1;
    for (i=1;i<=n;i++)
    {
        res*=i;
    }
    return res;*/
    if (n<0) return 0;
    if (n==0) return 1;
    int recAns=n*factorial(n-1);
    return recAns;
}
int main()
{
    int number;
    printf("please enter the number : ");
    scanf("%d", &number);
    int fact = factorial(number);
    printf("%d",fact);
}