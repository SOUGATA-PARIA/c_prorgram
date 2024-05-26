#include <stdio.h>
int main ()
{
    float c;// declaration of cost price
    float s;//declaration of shelling price
    printf("please enter the cost price of the product \n");//asking cost price of product from user
    scanf("%f",&c);//taking input from user
    printf("\n please enter the selling price of the product \n");//asking selling price of product
    scanf("%f",&s);//taking selling price as input of the product
    if(c>s)
    {
        printf("you have made loss by this deal. \n");
        float loss;
        loss = c-s;
        printf("the loss made through this deal is = %f",loss);
    }
    else if (c == s)
    {
        printf("you made neither profit nor loss through this deal.\n");
        printf("the net profit made through this deal = 0");
    }
    else
    {
        printf(" congratulations ! you made profit through this deal\n ");
        float profit;
        profit = s-c;
        printf("the net profit made by you through this deal is = %f",profit);
    }
    return 0;
}