#include <stdio.h>
int main ()
{
    int n;
    printf("please provide the number : ");
    scanf("%d",&n);
    /*printf("1\n");
    int product = 1;
    for (int i=1;i < n;i++)
    {
        product = product*(i+1);
        printf("%d\n",product);
    }
    return 0;*/
    int product = 1;
    for (int i=1;i <= n;i++)
    {
        product = product*(i);
        printf("the product of the number %d is = %d\n",i,product);
    }
        return 0;
}