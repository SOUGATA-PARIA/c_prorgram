#include <stdio.h>
int main()
{
    printf("please enter the ages \n");
    float a;
    printf("please enter the age of RAM : ");
    scanf("%f", &a);
    float b;
    printf("please enter the age of SHYAM : ");
    scanf("%f", &b);
    float c;
    printf("please enter the age of VIKRAM : ");
    scanf("%f", &c);
    if (a < b && a < c)
    {
        printf("RAM is the youngest of all");
    }
    if (b < a && b < c)
    {
        printf("SHYAM is the youngest of all");
    }
    if (c < a && c < b)
    {
        printf("VIKRAM is the youngest of all");
    }
    return 0;
}