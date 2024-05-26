#include <stdio.h>
int main()
{
    double x1, x2, x3, y1, y2, y3;
    printf("please enter the coordinate of first point : ");
    scanf("%lf %lf", &x1, &y1);
    printf("please enter the coordinate of second point : ");
    scanf("%lf %lf", &x2, &y2);
    printf("please enter the coordinate of third point : ");
    scanf("%lf %lf", &x3, &y3);
    double m1 = (y2 - y1) / (x2 - x1);
    double m2 = (y3 - y2) / (x3 - x2);
    double m3 = (y3 - y1) / (x3 - x1);
    if (m1 == m2 && m2 == m3) // if(m1==m2==m3)  --> you can't do this in c
    {
        printf("given points are on a straight line");
    }
    else
    {
        printf("given points are not on a straight line");
    }
    return 0;
}