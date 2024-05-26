#include <stdio.h>
void decrease (int n)
{
    if (n>1) decrease(n-1);
    printf("%d\n",n);
}
int main()
{
    int number;
    printf("please enter the number : ");
    scanf("%d", &number);
    decrease(number);
}