#include <stdio.h>
int power(int x,int y)
{
    int i=1;
    int product = 1;
    while (i<=y)
    {
        product*=x;
        i++;
    }
    return product;
}
int main ()
{
    int x,y;
    printf("please enter the base value : ");
    scanf("%d",&x);

    printf("please enter the power value : ");
    scanf("%d",&y);

    int product = power(x,y);
    printf("%d",product);

    return 0;
}