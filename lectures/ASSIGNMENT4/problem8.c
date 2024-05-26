#include <stdio.h>
int main(){
    int row,column;
    printf("Please enter the number of rows of the matrix : ");
    scanf("%d",&row);
    printf("Please enter the number of columns of the matrix : ");
    scanf("%d",&column);
    int mat1[row][column];
    int mat2[row][column];
    int res[row][column];
    //taking input for the first matrix 
    printf("Please enter the elements of the first matrix : \n");
    for(int i = 0;i<row;i++){
        for(int j= 0;j<column;j++){
            printf("Please enter the element of %d th row and %d th column : ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    //taking input for the second matrix 
    printf("\nPlease enter the elements of the second matrix : \n");
    for(int i = 0;i<row;i++){
        for(int j= 0;j<column;j++){
            printf("Please enter the element of %d th row and %d th column : ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            res[i][j] = mat1[i][j]+mat2[i][j];
        }
    }
    printf("\nThe resultat  matrix is  : \n");
    for(int i = 0;i<row;i++){
        for(int j= 0;j<column;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}