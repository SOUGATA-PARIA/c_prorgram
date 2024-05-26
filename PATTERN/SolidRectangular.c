#include <stdio.h>
int main ()
{
    int i;
    int j;
    printf("please enter the numbers of rows : ");
    scanf("%d",&i);
    printf("please enter the numbers of column : ");
    scanf("%d",&j);
    for (int m = 1; m<= i; m++)//loop for printing rows
    {
        for (int n = 1; n<= j; n++)//loop for printing column
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}