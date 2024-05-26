#include <stdio.h>
int main ()
{
    int a,b; //declaration of variables
    printf("this program is going to calculate remainder \n");//informing the user about program
    printf("please enter the divident :");//asking user for providing input for divident
    scanf("%d",&a);//taking input from user for divident
    printf("\n please enter the divisor :");//asking user for providing input for divisor
    scanf("%d",&b);//taking input from user for divisor
    int p = a/b; //calculation of result of division
    int r= a-p*b;//claculaton of remainder
    printf("\n the remainder is %d when %d is devided by %d",r,a,b);
    

    //we can use modulo operator here for getting result in one step
    int r1=a%b;
    printf("\n the remainder is = %d by using modulo operator",r1);
    return 0;
}