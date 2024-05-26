#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the number of rows : ");
    scanf("%d",&n);

    // code for printing pattern (pyramid of stars )

    for (int i = 1;i<=n;i++)
    {
        for (int j = 1; i+j<= n;j++)
        {
            printf(" ");
        }

        for (int k = 1; k<= 2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}