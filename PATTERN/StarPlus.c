#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the number of rows(must be a odd number) : ");
    scanf("%d",&n);
    if(n%2!=0)
    {

    

    //program for printing the pattern

    for (int i = 1;i <= n;i++)
    {
        for(int j = 1; j<= n;j++)
        {
            if (i==n/2 + 1 || j== n/2 +1)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    }
    else
    {
        printf("please enter a odd number : ");
    }
    return 0;
}