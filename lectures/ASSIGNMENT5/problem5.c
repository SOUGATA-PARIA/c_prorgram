#include <stdio.h>
void maximum()
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

    int row_max[row];
    int column_max[column];
    // for maximum elements of the rows
    for (int i = 0; i < row; i++)
    {
        int max = arr[i][0];
        for (int j = 0; j < column; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
        row_max[i] = max;
    }
    printf("The maximum element of indivisual row of the matrix is : ");
    for (int i = 0; i < row; i++)
    {
        printf("%d ", row_max[i]);
    }
    printf("\n");
    // now for maximum elements of the column
    //  for(int i = 0;i<column;i++){
    //      int max = arr[0][i];
    //      for(int j = 0;j<row;j++){
    //          if(max < arr[i][j]){
    //              max = arr[i][j];
    //          }
    //      }
    //      column_max[i] = max;
    //  }
    for (int i = 0; i < column; i++)
    {
        int max = arr[0][i];
        for (int j = 0; j < row; j++)
        {
            if (max < arr[j][i])
            {
                max = arr[j][i];
            }
        }
        column_max[i] = max;
    }
    printf("The maximum element of indivisual columns of the matrix is : ");
    for (int i = 0; i < column; i++)
    {
        printf("%d ", column_max[i]);
    }
    return;
}
int main()
{
    maximum();
    return 0;
}