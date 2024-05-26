#include <stdio.h>

int main()
{
    int n, i, j, symmetric = 1, lowerTriangular = 1, diagonal = 1, sum1 = 0, sum2 = 0;

    // Input the size of the array
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Input the 2D array
    int arr[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Please enter the element of %dth row and %dth column : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The given matrix is : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Check for symmetry, lower triangular, diagonal, and sum of diagonals
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // Check for symmetry
            if (arr[i][j] != arr[j][i])
            {
                symmetric = 0;
            }

            // Check for lower triangular
            if (i < j && arr[i][j] != 0)
            {
                lowerTriangular = 0;
            }

            // Check for diagonal
            if (i != j && arr[i][j] != 0)
            {
                diagonal = 0;
            }

            // Calculate sum of diagonals
            if (i == j)
            {
                sum1 += arr[i][j];
            }
            if (i + j == n - 1)
            {
                sum2 += arr[i][j];
            }
        }
    }

    // Output the results
    if (symmetric)
    {
        printf("The matrix is symmetric.\n");
    }
    if (lowerTriangular)
    {
        printf("The matrix is lower triangular.\n");
    }
    if (diagonal)
    {
        printf("The matrix is diagonal.\n");
    }
    else
    {
        printf("The matrix is not special.\n");
    }

    printf("Sum of diagonal elements: %d\n", sum1);
    printf("Sum of off-diagonal elements: %d\n", sum2);

    return 0;
}