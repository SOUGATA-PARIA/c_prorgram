#include <stdio.h>
int main()
{
    int num;
    printf("please enter a number : ");
    scanf("%d", &num);

    // finding the odd digits and getting sum
    int lastDigit;
    int sum = 0;
    while (num != 0)
    {
        lastDigit = num % 10;
        if (lastDigit % 2 != 0)
        {
            sum = sum + lastDigit;
        }
        num = num / 10;
    }
    printf("the sum of odd digits of the given number is : %d", sum);
    return 0;
}