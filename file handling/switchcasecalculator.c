#include <stdio.h>
int main ()
{
    float num1;
    float num2;
    char character;
    float result;
    printf("Please enter the first number : ");
    scanf("%f",&num1);
    printf("Please enter the operator : ");
    scanf("%c",&character);
    printf("Please enter the second number : ");
    scanf("%f",&num2);
    
    switch (character)
    {
    case '+' :
        result = num1 + num2;
        break;
    case '-' :
        result = num1 - num2;
        break;
    case '*' :
        result = num1 * num2;
        break;
    case '/' :
        result = num1 / num2;
        break;
    
    default:
        break;
    }
    printf("The result is : %f",result);
    return 0;
}


