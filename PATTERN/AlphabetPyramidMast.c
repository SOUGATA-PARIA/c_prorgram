#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the number of rows : ");
    scanf("%d",&n);

    for (int i = 1;i<=n;i++)
    {
        for (int j = 1; j<=n-i;j++)
        {
            printf(" ");
        }
        for (int k = 1;k <= i;k++)
        {
            int a = k+64;
            printf("%c",a);
        }
        int b = i-1;
        for (int l = 1;i-l >=1;l++)
        {
            //char ch = (char)(b+64);
            //printf("%c",ch);
            b+=64;
            printf("%c",b);
            b-=1;
        }
        printf("\n");
    }
    return 0;
}