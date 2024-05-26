#include<stdio.h>
int main()
{
    //we are going to write a program for calculating 
    //surfacarea of a sphere
    printf("please enter the radius of the sphere :");
    float r;//initialization of value of radius
    scanf("%f",&r);
    float pi = 3.146;//initialization of value of pi
    float s = 4*pi*r*r;//
    printf("the surface area of the sphere of given radius %f  unit is  %f",r,s);
    return 0;
}