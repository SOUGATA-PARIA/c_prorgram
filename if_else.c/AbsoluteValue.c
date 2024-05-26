#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the number \n");
    scanf("%d",&n);
    if (n>0 || n==0)
    {
        printf("the absolute value of the entered number is %d",n);
    }
    else
    {
        int m= (-1)*n;
        printf("the absolute value of the entered number is %d",m);
    }
    return 0;
}