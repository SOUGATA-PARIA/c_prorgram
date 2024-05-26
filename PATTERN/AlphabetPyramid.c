#include <stdio.h>
int main ()
{
    //code for taking input from user 
    int n;
    printf("please enter the number of rows : ");
    scanf("%d",&n);

    //code for printing the pattern 

    for (int i = 1;i<=n;i++)
    {
        int a = 65;
        for (int j = 1;i+j<=n;j++)//code for printing space along the row..
        {
            printf(" ");
        }

        for (int k = 1;k<=2*i-1;k++)
        {
            printf("%c",a);
            a+=1;
        }
        printf("\n");
    }

    return 0;
}