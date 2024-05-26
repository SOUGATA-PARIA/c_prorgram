#include <stdio.h>
int main ()
{
    int n;
    int a = 0;
    printf("please enter the number : ");
    scanf("%d",&n);
    for (int i = 2; i <= (n-1); i++)
    {
        if(n % i == 0)
        {
            a = 1;
            break;
        }
    }
        if (a == 0)
        {
            printf("the provided number is prime");
        }
        else if (n == 1)
        {
            printf("the provided number is neither prime nor composite");
        }
        else
        {
            printf("the provided number is composite");
        }
return 0;
}