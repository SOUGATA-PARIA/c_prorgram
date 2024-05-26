#include <stdio.h>

// customized factorial function

int factorial(int n)
{
    if (n >= 0)
    {
        int fact = 1;
        int i = 1;
        while (i <= n)
        {
            fact = fact * i;
            i++;
        }
        return fact;
    }
    else {
        return 0;
    }
    return 0;
}

int main()
{

//taking input from the user 
    int n;
    printf("please enter the number of rows : ");
    scanf("%d",&n);

    for (int i = 0;i<=n;i++)
    {
        for (int k = 0;i+k<=n-1;k++)
        {
            printf(" ");
        }
        for (int j=0;j<=i;j++)
        {
            int icj = factorial(i)/(factorial(j)*factorial(i-j));
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}