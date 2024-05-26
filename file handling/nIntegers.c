#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Please enter the size of numberlist : ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    // taking input from the user
    //  As we do not loose the pointer position therefore using an another pointer to point that
    int *p = ptr;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &(*ptr));
        ptr++;
    }
    int *t = p;
    // printing the numbers
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *p);
        p++;
    }
    return 0;
}