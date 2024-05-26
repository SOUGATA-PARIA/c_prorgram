#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the number of rows : ");
    scanf("%d",&n);

    //program for printing pattern

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}