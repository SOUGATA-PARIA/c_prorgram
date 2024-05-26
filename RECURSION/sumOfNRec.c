#include <stdio.h>
void sum(int n,int x)
{
    if(n==0)
    {
        printf("the sum = %d",x);
        return;
    }
    sum(n-1,x+n);
    return;
}
int main ()
{
    int number;
    printf("please enter the number : ");
    scanf("%d",&number);
    sum(number,0);
}