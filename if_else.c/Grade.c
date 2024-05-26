#include <stdio.h>
int main ()
{
    int n;
    printf("please enter your marks out of 100 \n");
    scanf("%d",&n);
    if (n/10 == 10 || n/10 == 9)//i used && operator here first but it is not possible 
    //because simultaneously it can not hold two values
    //therefore it gave error.
    {
        printf("your grade is A+");
    }
    else if (n/10 ==8)
    {
        printf("your grade is A");
    }
    else if (n/10==7)
    {
        printf("your grade is B+");
    }
    else if (n/10==6)
    {
        printf("your grade is C+");
    }
    else if (n/10 == 5)
    {
        printf("your grade is C");
    }
    else if (n/10 == 4)
    {
        printf("your grade is D+");
    }
    else
    {
        printf("you failed in the exam;better luck next time;keep hard working");
    }
    return 0;
}