#include <stdio.h>
int main ()
{
    //taking input from user 
    int n;
    printf("please enter the number of row : ");
    scanf("%d",&n);

    for (int i = 1; i<=n;i++)//for the lines (row)
    {
        //for printing space
        
        for (int j=1;i+j<=n;j++)
        {
            printf(" ");
        }
        //for printing number wedge

        int a = 1;
        for (int k = 1;k<=i;k++)
        {
            printf("%d",a);
            a+=1;
        }

        //for printing the decreasing part

        int b = i-1;
        for (int l = 1;i-l>=1;l++)
        {
            printf("%d",b);
            b--;
        }
        printf("\n");
    }
    return 0;
}