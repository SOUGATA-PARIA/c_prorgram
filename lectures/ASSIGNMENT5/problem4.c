#include <stdio.h>
int maximum()
{
    int row;
    printf("Please enter the no of row of the matrix : ");
    scanf("%d", &row);
    int column;
    printf("Please enter the no of column of the matrix : ");
    scanf("%d", &column);
    int arr[row][column];
    printf("Please enter the elements of the array : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("please enter the element of %d th row and %d th column : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The given matrix is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // now calculating the maximum element of the array
    int max = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int max = maximum();
    printf("The maximum element present with in the array is : %d", max);
    return 0;
}