#include <stdio.h>
int main()
{
    int n = 7;

    // pattern for printing S

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || i == (n / 2) + 1 || i <= (n / 2) + 1 && j == 1 || i >= (n / 2) + 1 && i <= n && j == n)
            {
                printf("$");
            }
            else
                printf(" ");
        }
        printf(" ");

        // pattern for H

        for (int k = 1; k <= n; k++)
        {
            if (k == 1 || k == n || i == (n / 2) + 1)
            {
                printf("H");
            }
            else
                printf(" ");
        }

        printf(" ");

        // code for writing R

        for (int z = 1; z <= n; z++)
        {
            if (i == 1 || i == ((n / 2) + 1) || z == 1 || (z == n && i <= (n / 2) + 1) || (i > (n / 2) + 1 && i - z == 1))
            {
                printf("R");
            }
            else
                printf(" ");
        }

        printf(" ");

        // code for writing U

        for (int l = 1; l <= n; l++)
        {
            if (l == 1 || l == n || i == n)
            {
                printf("U");
            }
            else
                printf(" ");
        }

        printf(" ");

        // code for writing T
        for (int l = 1; l <= n; l++)
        {
            if (i == 1 || l == (n / 2) + 1)
            {
                printf("T");
            }
            else
                printf(" ");
        }
        printf(" ");

        // code for I

        for (int l = 1; l <= n; l++)
        {
            if (i == 1 || i == n || l == (n / 2) + 1)
            {
                printf("I");
            }
            else
                printf(" ");
        }
        printf("           ");

        // code for writing D
        for (int l = 1; l <= n; l++)
        {
            if (l == 1 || (i == 1 && l < n - 1) || (l == n && i >= 2 && i <= n - 1) || i == n && l < n - 1)
            {
                printf("D");
            }
            else
                printf(" ");
        }
        printf(" ");

        // code for I

        for (int l = 1; l <= n; l++)
        {
            if (i == 1 || i == n || l == (n / 2) + 1)
            {
                printf("I");
            }
            else
                printf(" ");
        }
        printf(" ");

        // code for writing D
        for (int l = 1; l <= n; l++)
        {
            if (l == 1 || (i == 1 && l < n - 1) || (l == n && i >= 2 && i <= n - 1) || i == n && l < n - 1)
            {
                printf("D");
            }
            else
                printf(" ");
        }
        printf(" ");

        // code for I

        for (int l = 1; l <= n; l++)
        {
            if (i == 1 || i == n || l == (n / 2) + 1)
            {
                printf("I");
            }
            else
                printf(" ");
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
                printf("I");
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
                printf("U");
            }
            else
                printf(" ");
        }

        printf(" ");


        printf("\n");
    }
    return 0;
}