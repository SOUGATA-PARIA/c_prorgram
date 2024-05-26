// here we have to make an two dimensional array and trace the elements along the row and coloum
//  we will have to make seperate function
#include <stdio.h>
// making an matrix for determinig maximum elements of the row and coloum
void matrix()
{
    int row;
    printf("Please enter the number of rows of the matrix : ");
    scanf("%d", &row);
    int coloumn;
    printf("Please enter the number of coloums of the matrix : ");
    scanf("%d", &coloumn);
    // now making the matrix of the givenion
    int arr[row][coloumn];
    // now taking the elements of the matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
            printf("please enter the element of %d th row and %d th coloumn : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    // now printing the matrix for better understanding of user
    printf("The provided matrix is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // now tracing the elements row wise for the maximum elements
    int maxrow[row];
    int max;
    for (int i = 0; i < row; i++)
    {
        max = arr[i][0];
        for (int j = 0; j < coloumn; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
        maxrow[i] = max;
    }
    // now printing the maximum elements of each row
    printf("\nThe maximum elementss of each row is :\n");

    for (int i = 0; i < row; i++)
    {
        printf("%d ", maxrow[i]);
    }
    // now finding the maximum element of each coloumn
    int maxcol[coloumn];
    for (int i = 0; i < coloumn; i++)
    {
        max = arr[0][i];
        for (int j = 0; j < row; j++)
        {
            if (max < arr[j][i])
            {
                max = arr[j][i];
            }
        }
        maxcol[i] = max;
    }
    // now printing the maximum elements of each coloumn
    printf("\nThe maximum elementss of each coloumn is :\n");

    for (int i = 0; i < coloumn; i++)
    {
        printf("%d ", maxcol[i]);
    }
}
int main()
{
    matrix();
}