#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the number of rows : ");
    scanf("%d",&n);

    for (int i= 1;i <=n;i++)
    {
        for (int j=1;i+j<=n;j++)//for printing spaces 
        {
            printf(" ");
        }
        

        int a=1;
        for (int k=1;k<=i;k++)
        {
            printf("%c",a+64);
            a++;
        }printf("\n");
        /*int a=65;
        for (int j=1;j<=n;j++)
        {
            if (i+j>= n+1){
            printf("%c ",a);
            a++;}
            else 
            {
                printf(" ");
            }
        }
        printf("\n");*/
    }
    return 0;
}