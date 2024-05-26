#include <stdio.h>
int main()
{
    int row, column;
    int new_row, new_column;
    printf("please enter the number of rows of the matrix : ");
    scanf("%d", &row);
    printf("please enter the number of columns of the matrix : ");
    scanf("%d", &column);

    int arr[row][column];
    new_row = column;
    new_column = row;
    int brr[new_row][new_column];
    printf("please enter the elements of the matrix : \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("the matrix is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }
    printf("the transposed matrix is : \n");
    for (int i = 0; i < new_row; i++)
    {
        for (int j = 0; j < new_column; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}