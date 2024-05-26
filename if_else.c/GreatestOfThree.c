/*take three positive integer input and print the greatest of them.
consider all three are distinct*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("please enter three distinct integers,then we will say the greatest one");
    printf("\n please enter the first number : ");
    scanf("%d", &a);
    printf(" please enter the second number : ");
    scanf("%d", &b);
    printf(" please enter the third number : ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("the greatest number is %d among %d %d %d", a, a, b, c);
    }
    else if (b > a && b > c)
    {
        printf("the greatest number is %d among %d %d %d", b, a, b, c);
    }
    else if (c > a && c > b)
    {
        printf("the greatest number is %d among %d %d %d", c, a, b, c);
    }
    return 0;
}