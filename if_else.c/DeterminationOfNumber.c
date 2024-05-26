#include <stdio.h>
int main()
{
    int n;
    printf("please enter the number : \n");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("your entered number is a positive number ");
    }
    else if (n < 0)
    {
        printf("your entered number is a negetive number");
    }
    else
    {
        printf("your entered number is zero");
    }
    return 0;
}