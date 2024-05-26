#include <stdio.h>
void increase (int x,int n)
{
    if (x>n) return;
    printf("%d\n",x);
    increase(x+1,n);
}
int main()
{
    int number;
    printf("please enter the number : ");
    scanf("%d", &number);
    increase(1,number);
}