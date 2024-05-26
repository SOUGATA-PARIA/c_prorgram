#include <stdio.h>
int fibo (int n)
{
    if (n<=2) return 1;
    int recAns=fibo(n-1)+fibo(n-2);
    return recAns;
}
int main()
{
    int number;
    printf("please enter the number : ");
    scanf("%d", &number);
    int fact = fibo(number);
    printf("the %d th term of fibonacci series is : %d",number,fact);
    return 0;
}