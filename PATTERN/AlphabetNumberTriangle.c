#include <stdio.h>
int main()
{
    int n;
    printf("please enter the number of rows : ");
    scanf("%d", &n);
    // program for printing loops

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c ", a + 64);
            }
            else
            {
                printf("%d ", a);
            }
            a = a + 1;
        }
        printf("\n");
    }
    return 0;
}