#include <stdio.h>
int main ()
{
    int m,n;
    printf("please enter the number of rows : ");
    scanf("%d",&m);
    printf("please enter the number of columns : ");
    scanf("%d",&n);
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (i==1 || i==m || j==1 || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}