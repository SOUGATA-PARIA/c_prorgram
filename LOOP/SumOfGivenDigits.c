#include <stdio.h>
int main ()
{
    // how to retrive the last digit of a given number??
    // (given number)%10= last digit
    int num;
    printf("please enter the number : ");
    scanf("%d",&num);
    int sum = 0;
    while (num != 0)
    {
        int lastDigit = num %10;
        num = num/10;//if you don't write this line then this would go to a infinite loop
        sum = sum + lastDigit;
    }
    printf("the sum of digits of given number is : %d",sum);
    return 0;
}