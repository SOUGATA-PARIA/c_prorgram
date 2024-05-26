/*take four integer input from user
and comment the greatest one*/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("please enter four distinct integers :\n");
    printf("please enter the first number : ");
    scanf("%d", &a);
    printf("please enter the second number : ");
    scanf("%d", &b);
    printf("please enter the third number : ");
    scanf("%d", &c);
    printf("please enter the fourth number : ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("the greatest is %d", a);
    }
    if (b > c && b > a && b > d)
    {
        printf("the greatest is %d", b);
    }
    if (c > b && c > a && c > d)
    {
        printf("the greatest is %d", c);
    }
    if (d > b && d > c && d > a)
    {
        printf("the greatest is %d", d);
    }
    return 0;
}