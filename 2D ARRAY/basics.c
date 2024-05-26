#include <stdio.h>
int main ()
{
    int row ;
    int column;
    printf("please enter the row number of the array : ");
    scanf("%d",&row);
    printf("please enter the column number of the array : ");
    scanf("%d",&column);

    int arr[row][column];

    for(int i = 0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("please enter the element of the aray of row number %d column %d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}