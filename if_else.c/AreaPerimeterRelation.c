//write a program taking input from user for length and bredth of a rectangle.
//state by the program whether the area is more than perimeter??

#include <stdio.h>
int main()
{
    float l,b,a,p;
    printf("please enter the value of the length of the rectangle : ");
    scanf("%f",&l);
    printf("please enter the value of the bredth of the rectangle : ");
    scanf("%f",&b);
    a = l*b;
    p = 2*(l+b);
    if (a>p)
    {
        printf("the value of area is greater than the value of perimeter when the length is %f unit  and breadth is %f unit of the rectangle ",l,b);
    }
    else if (a ==p)
    {
        printf("the value of area is equal to  the value of perimeter when the length is %f unit and breadth is %f unit of the rectangle ",l,b);
    }
    else
    {
        printf("the area is less than the value of perimeter when the length is %f unit and breadth is %f unit  of the rectangle ",l,b);
    }
    return 0;
}