#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the number :");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\n your entered number is EVEN ");
    }
    else//if condition is (n%2 !=0)
    {
        printf("your entered number is ODD");
    }
    return 0;
}