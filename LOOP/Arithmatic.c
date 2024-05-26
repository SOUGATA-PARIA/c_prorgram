#include <stdio.h>
int main()
{
    int i, n;
    printf("please enter the number : ");
    scanf("%d", &n);
    for (i = 4; i <= (1 + 3 * n); i += 3)
    {
        printf("%d ", i);
    }
    return 0;
}