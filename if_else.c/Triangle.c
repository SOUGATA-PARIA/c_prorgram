#include <stdio.h>
int main()
{
    int a, b, c; // let us consider a,b,c denotes length of side of the triangle
    printf("please enter the length of the sides of the triangle\n");
    printf("please enter length of a side of the triangle :");
    scanf("%d", &a);
    printf("please enter length of the other side of the triangle :");
    scanf("%d", &b);
    printf("please enter length of last side of the triangle :");
    scanf("%d", &c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("the triangle can be formed by the length of sides given");
    }
    else
    {
        printf("the triangle can not be formed");
    }
    return 0;
}