#include <stdio.h>
int main()
{
    // declaration and taking input from user
    int num;
    printf("please enter the number : ");
    scanf("%d", &num);

    // code for reversing the number
    int lastDigit;
    int sum = 0;
    while (num != 0)
    {
        lastDigit = num % 10;
        sum = 10 * sum + lastDigit;
        num = num / 10;
    }
    printf("the reverse of the given number is : %d", sum);

    return 0;
}