#include <stdio.h>
void change(int x,int n)
{
    if(x>n) return;
    printf("%d\n",x);
    change(x+1,n);
    printf("%d\n",x);
    return;
}
int main()
{
    int number;
    printf("please enter the number : ");
    scanf("%d",&number);
    change(1,number);
    return 0;
}