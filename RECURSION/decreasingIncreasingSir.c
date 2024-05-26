#include <stdio.h>
void change(int x)
{
    if(x==0) return;
    printf("%d\n",x);
    change(x-1);
    printf("%d\n",x);
    return;
}
int main()
{
    int number;
    printf("please enter the number : ");
    scanf("%d",&number);
    change(number);
    return 0;
}