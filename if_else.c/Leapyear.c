#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the year which you want to check :");
    scanf("%d",&n);
    if (n%4==0)
    {
        if (n%100==0)
        {
            if (n%400==0)
            {
                printf("your entered year is LEAPYEAR");
            }
        }
        else
        {
            printf("your entered year is LEAPYEAR");
        }
    }
    else
    {
        printf("your entered year is not  LEAPYEAR");
    }
    return 0;
}