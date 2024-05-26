#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the number of rows : ");
    scanf("%d",&n);
    //program for printing pattern

    for (int i=1;i<=n;i++)
    {
        int a=65;
        for (int j = 1;j<=n;j++)
        {
            printf("%c ",a);
            a=a+1;
        }
        printf("\n");
    }
    return 0;
}