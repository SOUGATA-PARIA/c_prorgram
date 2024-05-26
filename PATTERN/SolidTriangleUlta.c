#include <stdio.h>
int main()
{
    int n;
    printf("please enter the number of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; i + j <= n + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}