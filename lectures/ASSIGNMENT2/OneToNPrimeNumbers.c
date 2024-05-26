#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the number : ");
    scanf("%d",&n);
    
    int m =2;
    for (int i=2;i<=m-1;i++)
    {
        int a = 0;
        if (m%i==0)
        {
            break;
            a=1;
        }
        else 
        {
            printf("%d",m);
        }
    }
    return ;
}