#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the no of term which you want to know : ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum;
    for (int i=1;i<=n-2;i++)
    {
        sum = a + b;
        b =a;
        a = sum;
    }
    printf("%d",sum);
    return 0;
}