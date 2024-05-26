#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the number of rows : ");
    scanf("%d",&n);

    int a=1;
    int b=1;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;i+j<=n;j++)
        {
            printf("  ");
        }

        //for (int k = 1; k <=2*i-1; k++)
        for (int k=1;k<=b;k++) 
        {
            printf("%d ",a);
            a+=1;
            
        }
        b+=2;
        printf("\n");
        
    }
}