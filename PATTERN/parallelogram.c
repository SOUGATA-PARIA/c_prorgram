#include <stdio.h>
int main (){
    int m;
    int n;

    printf("please enter the number of rows : ");
    scanf("%d",&m);

    printf("please enter the number of colums : ");
    scanf("%d",&n);

    for (int i = 1; i <= m; i++)
    {
        for (int  j = 1; j <= n; j++)
        {
            if (i+j >= m+1 && i+j <2*m)
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
}