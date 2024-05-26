#include <stdio.h>
int main (){
    int row,column;
    int max,ri,ci;
    printf("please enter the number of rows of the matrix : ");
    scanf("%d",&row);
    printf("please enter the number of rows of the matrix : ");
    scanf("%d",&column);

    int arr[row][column];
    printf("please enter the elements of the matrix : ");

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
    max = arr[0][0];
    for(int i = 0;i<row ; i++){
        for(int j=0;j<column;j++){
            if(max < arr[i][j]){
                max = arr[i][j];
                ri = i;
                ci = j;
            }
        }
    }
        printf("the maximum element of the matrix is  : %d \n",max);
        printf("the row number of the maximum element of the array is : %d\n",ri+1);
        printf("the column number of the maximum element of the array is : %d\n",ci+1);
    return 0;
}