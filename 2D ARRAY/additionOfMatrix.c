#include <stdio.h>
int main(){
    int row ;
    int column;

    printf("please enter the number of rows of the matrix : ");
    scanf("%d",&row);

    printf("please enter the number of column of the matrix : ");
    scanf("%d",&column);

    int arr[row][column];
    int brr[row][column];
    int crr[row][column];
    printf("please enter the element of first matrix : \n");
    for (int i = 0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("please enter the element of %d th row and %d th column : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("please enter the elements of second matrix  : \n");
    for (int i = 0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("please enter the element of %d th row and %d th column : ",i+1,j+1);
            scanf("%d",&brr[i][j]);
        }
    }
    for (int i = 0;i<row;i++){
        for(int j=0;j<column;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
        }
    }

    printf("the resultant matrix is \n");
    for (int i = 0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
