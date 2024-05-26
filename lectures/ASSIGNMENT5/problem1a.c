#include <stdio.h>
// making an function to calculate the power value
int power(int *x, int *n)
{
    int i = 0;
    int result = 1;
    int *res = &result;
    while (i < *n)
    {
        *res = (*res) * (*x);
        i++;
    }
    return *res;
}
int main()
{
    int x;
    printf("Please enter the base number : ");
    scanf("%d", &x);
    int n;
    printf("Please enter the exponent : ");
    scanf("%d", &n);

    // makig pointer for doing pass by reference
    int *p = &x;
    int *q = &n;
    int result = power(p, q);
    printf("The value  is : %d", result);
    return 0;
}