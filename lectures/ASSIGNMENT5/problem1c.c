#include <stdio.h>
void check(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int gcd(int x, int y)
{
    while (y != 0)
    {
        int temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}
int main()
{
    int a;
    printf("please enter the first number : ");
    scanf("%d", &a);
    int b;
    printf("please enter the first number : ");
    scanf("%d", &b);
    // making pointer of a and b
    int *x = &a;
    int *y = &b;
    // now calling an fuction to check whether the first number is larger or not
    //  if not then reverse the values
    if (a < b)
    {
        check(x, y);
    }
    // now calling the function to calculate GCD
    int result = gcd(a, b);
    printf("The gcd of given two numbers is : %d", result);
    return 0;
}