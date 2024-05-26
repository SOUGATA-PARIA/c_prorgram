#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the number of rows or columns : ");
    scanf("%d",&n);

    int a;


    //code for printing pattern
    
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0) a= 0;
            else a=1;
        for (int j = 1; j <= i ; j++)
        {
            printf("%d ",a);
            if(a==0)
            { a=1;
            }
            else
            {
                a=0;
            }
                    
        }
        printf("\n");
        
    }
    
    return 0;
}