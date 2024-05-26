#include <stdio.h>
int main (){
    int row,column;
    int sum,count;
    printf("please enter the number of rows of the matrix : ");
    scanf("%d",&row);
    printf("please enter the number of columns of the matrix : ");
    scanf("%d",&column);

    int arr[row][column];
    int brr[row];
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

    printf("the transpose of the ginven matrix is \n");

    for(int i = 0;i<column;i++){
        for(int j = 0;j<row;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}