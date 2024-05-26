#include <stdio.h>
int main ()
{
    //taking input from the user ...
    int number;
    int n;
    int m = 0;
    printf("please provide the number : ");
    scanf("%d",&number);

    // reversing the number using while loop

    while (number != 0)
    {
        n = number % 10;
        m = m*10 + n;
        number = number /10;
    }

    //once again reversing the number ... 
    //along with using the nested loop to print string 


    int r;
    while (m != 0)
    {
        r = m%10;
        m = m/10;
        if (r == 0)
        {
            printf("Zero ");
        }
        else if (r == 1)
        {
            printf("One ");
        }
        else if (r == 2)
        {
            printf("Two ");
        }
        else if (r == 3)
        {
            printf("Three ");
        }
        else if (r == 4)
        {
            printf("Four ");
        }
        else if (r == 5)
        {
            printf("Five ");
        }
        else if (r == 6)
        {
            printf("Six ");
        }
        else if (r == 7)
        {
            printf("Seven ");
        }
        else if (r == 8)
        {
            printf("Eight ");
        }
        else
        {
            printf("Nine ");
        }
    }
    return 0;
}