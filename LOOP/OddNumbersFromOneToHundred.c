#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            //printf("%d ", i);
            continue;
        }
        printf("%d ", i);
    }
    printf("%d ", i);
    return 0;
}