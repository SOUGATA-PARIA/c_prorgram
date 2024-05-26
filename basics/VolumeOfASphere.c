/*we are going to write a program on 
finding the volume of a sphere with given radius*/
#include <stdio.h>
int main()
{
    float r;
    printf("we are going to calculate the volume of a sphere of given radius \n");
    printf("please enter the radius of the sphere");
    scanf("%f",&r);
    float pi = 3.146;//initialization of the value of pi
    float v; //declaration of variable V which denotes the volume of given sphere
    v= 4*pi*r*r*r/3;//writing the formula of finding volume
    printf("the volume of the sphere with the radius of %f unit is %f ",r,v);
    return 0;

}