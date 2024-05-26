#include <stdio.h>
int main()
{
    int n;
    printf("please enter the number of rows : ");
    scanf("%d", &n);

    int ml;
    if (n%2==0)
    {
        ml = (n / 2) ;
    }
    else 
    {
        ml = (n / 2) + 1;
    }

    int nsp = n / 2;
    int nst = 1;
    

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++) // for space
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++) // for star
        {
            printf("*");
        }
        if (i < ml)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        printf("\n");
    }
    return 0;
}