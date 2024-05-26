#include <stdio.h>
int main()
{
    int a = 5;
    int b = 2;
    float x=5;
    float y = 2;
    float m = x/y;
    printf("%f",m);
    printf("\n");
    float z = a/b;// as we stored the value of "a"&'"b" im integer data type,
    //the resultant is also an integer not floating point value.
    printf("%f",z);
    float p = 5/2; // integer/integer is always a integer,though u store this in float data type
    printf("\n%f",p);
    return 0;
}