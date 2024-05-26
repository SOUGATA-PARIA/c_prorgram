
//code for printing number rectangle 

#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the number of rows and column : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)//loop for number  of rows
    {
        for(int j = 1;j<=n;j++)//loop for number of columns
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}