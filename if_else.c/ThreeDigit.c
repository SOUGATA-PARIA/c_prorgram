//findout whether the input is a three digit integer or not??
#include <stdio.h>
int main ()
{
    int num;
    printf("please enter the number : ");
    scanf("%d",&num);
    if(num>99 && num < 1000)
    {
        printf("your entered number is a three digit number .");
    }
    else{
        printf("your entered number is not a three digit number .");
    }
    return 0;
}