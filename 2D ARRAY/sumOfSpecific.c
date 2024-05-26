#include <stdio.h>
int main()
{
    int row, column;
    int sum;
    int sr,sc,er,ec;
    printf("please enter the number of rows of the matrix : ");
    scanf("%d", &row);
    printf("please enter the number of rows of the matrix : ");
    scanf("%d", &column);

    int arr[row][column];
    printf("please enter the elements of the matrix : \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("please enter the starting row and column of the matrix : ");
    scanf("%d %d",&sr,&sc);
    printf("please enter the ending row and the ending column of the matrix : ");
    scanf("%d %d",&er,&ec);

    printf("the given matrix is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // comparison
    sum = 0;
    for (int i = sr-1; i < er; i++)
    {
        for (int j = sc-1; j < ec; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("the sum of element of the matrix is  : %d \n", sum);
    return 0;
}