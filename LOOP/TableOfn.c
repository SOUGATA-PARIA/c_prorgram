#include <stdio.h>
int main()
{
    int i, n;
    printf("please enter the number : ");
    scanf("%d", &n);
    for (i = n; i <= (n * 10); i += n)
    {
        printf("%d ", i);
    }
    return 0;
}