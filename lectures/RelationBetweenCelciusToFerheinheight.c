#include <stdio.h>
int main ()
{
    float c;//declaring the variable which denotes the temperature at celcius scale
    float F;//declaring the variable which denotes the temperature at ferhenheight scale
    printf("if you want to convert from celcius to ferheinheight please press : 1 \n");
    printf("if you want to convert from ferheinheight to celcius please press : 2 \n");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            printf("please enter the temperature in celcius : ");
            scanf("%f",&c);
            F = 9*(c/5)+32;
            printf("the temperature in celcius scale will be = %f",F);
            break;
        case 2:
            printf("please enter the temperature in ferheinheight : ");
            scanf("%f",&F);
            c = (5/9)*(F - 32);
            printf("the temperature in celcius scale will be = %f",c);
            break;
        default:
        printf("please enter a valid number !! ");
    }
    return 0;
}