#include <stdio.h>
int sum(int n)
{
    if (n == 0)
        return 0;
    int result = n + sum(n - 1);
    return result;
}
int main()
{
    int number;
    printf("please enter the number : ");
    scanf("%d", &number);
    int result = sum(number);
    printf("the result = %d", result);
    return 0;
}