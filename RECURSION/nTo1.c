#include <stdio.h>
void decrease (int n)
{
    printf("%d\n",n);
    if (n>1) decrease(n-1);
}
int main()
{
    int number;
    printf("please enter the number : ");
    scanf("%d", &number);
    decrease(number);
}