// we are going to write a code for finding n!
#include <stdio.h>
int main()
{
    int n;//declaring the variable n
    int factorial = 1;//initializing the factorial variable
    printf("please enter the number : "); // asking user to give input
    scanf("%d", &n);// taking input of n and storing the value of n at the memory
    int i;//declare the variable i (used in the loop)
    if (n < 0)//as factorial of negative numbers does not exist ; there fore a codition for this
    {
        printf("factorial does not exist for negative integers ");//stating that factorial dose not exist of negetive numbers
    }
    else if (n == 0)//the value of 0! is equal to 1
    {
        printf("the value of 0! is = 1");
    }
    else
    {
        for (i = 1; i <= n; i++)//initializing the for loop
        {
            factorial = factorial * i;//multiplying the consecutve numbers and storing them in "factorial" variable
        }
        printf("the value of %d! is equal to : %d", n, factorial);//printing the value of factorial
    }
    return 0;
}