#include <stdio.h>

//costomized factorial function

int factorial (int n)
{
    if (n>=0)
    {
        int fact = 1;
        int i=1;
        while (i<=n)
        {
            fact*=i;//fact = fact*i;
            i++;
        }
        return fact;
    }
    else
    {
        return 0;
    }
    return 0;
}



int main ()
{
    int n;

    printf("please enter the value of n : ");
    scanf("%d",&n);

    
    int r;

    printf("please enter the value of n : ");
    scanf("%d",&r);

//calculation of result 

    int result;
    result = factorial(n)/(factorial(r)*factorial(n-r));
    printf("the value of the given combination is : %d",result);

    return 0;
}