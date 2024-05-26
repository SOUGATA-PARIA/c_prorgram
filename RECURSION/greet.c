#include <stdio.h>
void greet (int n)
{
    printf("Good morning \n");
    if (n>1) greet(n-1);
}
int main()
{
    int number;
    printf("please enter the number : ");
    scanf("%d", &number);
    greet(number);
}