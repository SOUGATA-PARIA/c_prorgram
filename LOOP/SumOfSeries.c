#include <stdio.h>
int main()
{
    int n;
    printf("please provide the last number of the series : ");
    scanf("%d", &n);

    // to run the for loop for n number of times
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum - i;
        }
        else
        {
            sum = sum + i;
        }
    }printf("the sum of the series till given number %d is = %d",n,sum);
    return 0;
}