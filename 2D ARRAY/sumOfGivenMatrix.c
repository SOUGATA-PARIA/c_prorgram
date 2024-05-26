#include <stdio.h>
int main (){
    int row,column;
    int max;
    printf("please enter the number of rows of the matrix : ");
    scanf("%d",&row);
    printf("please enter the number of rows of the matrix : ");
    scanf("%d",&column);

    int arr[row][column];
    printf("please enter the elements of the matrix : \n");

    for(int i = 0;i<row ; i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("the matrix is : \n");
    for(int i = 0;i<row ; i++){
        for(int j=0;j<column;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    //comparison
    max = 0;
    for(int i = 0;i<row ; i++){
        for(int j=0;j<column;j++){
            max+=arr[i][j];
            }
        }
        printf("the sum of element of the matrix is  : %d \n",max);
    return 0;
}