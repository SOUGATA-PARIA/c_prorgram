#include <stdio.h>
int main ()
{
    int n = 7;

    //pattern for printing S
    
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            if(i ==1 || i == n ||i == (n/2)+1 ||i <= (n/2)+1 && j==1 || i>=(n/2)+1 && i<=n && j==n ){
                printf("S");
            }
            else printf(" ");
        }
        printf(" ");

        //pattern for H

        for(int k = 1; k<=n;k++){
            if(k==1 || k==n || i == (n/2)+1){
                printf("H");
            }
            else printf(" ");
        }

        printf(" ");

        //code for I

        for(int l = 1; l<=n;l++){
            if(i == 1 || i==n ||l==(n/2)+1){
                printf("I");
            }
            else printf(" ");
        }
        printf("   ");

        //code for K

        for(int m = 1;m<=n;m++){
            if(m == 1 || i+m == n || i-m==1){
                printf("K");
            }
            else printf(" ");
        }
        printf(" ");

        //pattern for H

        for(int o = 1; o<=n;o++){
            if(o==1 || o==n || i == (n/2)+1){
                printf("H");
            }
            else printf(" ");
        }
        printf(" ");

        //pattern for A

        for(int p = 1; p<=n;p++){
            if(i==1 || p==1 || p==n || i == (n/2)+1){
                printf("A");
            }
            else printf(" ");
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");
    // code for writing M
    //  for (int i = 1; i <= n; i++)
    //  {
    //      for (int j = 1; j <= n; j++)
    //      {
    //          if (j == 1 || j == n || (j <= ((n / 2) + 1) && j >0 && (j == i || j == ((n - i) + 1))))
    //          {
    //              printf("M");
    //          }
    //          else
    //              printf("  ");
    //      }
    //      printf("\n");
    //  }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || (i <= ((n / 2) + 1) && i > 1 && (j == i || j == ((n - i) + 1))))
            {
                printf(" ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");
        

        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || (i <= ((n / 2) + 1) && i > 1 && (j == i || j == ((n - i) + 1))))
            {
                printf(" ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");

        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || (i <= ((n / 2) + 1) && i > 1 && (j == i || j == ((n - i) + 1))))
            {
                printf("M");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");

        for (int l = 1; l <= n; l++)
        {
            if (i == 1 || i == n || l == (n / 2) + 1)
            {
                printf("$");
            }
            else
                printf(" ");
        }
        printf("   ");

        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || i == (n / 2) + 1 || i <= (n / 2) + 1 && j == 1 || i >= (n / 2) + 1 && i <= n && j == n)
            {
                printf("$");
            }
            else
                printf(" ");
        }
        printf("   ");

        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || i == (n / 2) + 1 || i <= (n / 2) + 1 && j == 1 || i >= (n / 2) + 1 && i <= n && j == n)
            {
                printf("$");
            }
            else
                printf(" ");
        }
        printf("   ");
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || (i <= ((n / 2) + 1) && i > 1 && (j == i || j == ((n - i) + 1))))
            {
                printf(" ");
            }
            else
            {
                printf(" ");
            }
        }
        printf(" ");
        for (int l = 1; l <= n; l++)
        {
            if (l == 1 || l == n || i == n)
            {
                printf("&");
            }
            else
                printf(" ");
        }

        printf(" ");


        printf("\n");
    }
    printf("\nI am sorry didi !!\n");
    
    return 0;
}