#include <stdio.h>
int main ()
{
    //input number taking ...
    int num;
    printf("please enter the given number : ");
    scanf("%d",&num);

    //taking even digits of the number 
    int sum = 0;
    while (num != 0)
    {
        int lastDigit = num % 10;
        if (lastDigit %2 == 0)
        {
            sum = sum + lastDigit;
        }
        num = num /10;
    }
    printf("the sum of even digits of the given number is : %d",sum);
    return 0;
}