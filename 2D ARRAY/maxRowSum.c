#include <stdio.h>
int main (){
    int row,column;
    int sum,count;
    printf("please enter the number of rows of the matrix : ");
    scanf("%d",&row);
    printf("please enter the number of rows of the matrix : ");
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

    //comparison
    
    for(int i = 0;i<row ; i++){
        sum = 0;
        for(int j=0;j<column;j++){
            sum+=arr[i][j];
            brr[i]=sum;
            }
        }
        int max = brr[0];
        for(int i = 0;i<row; i++){
            if (max < brr[i]){
                max = brr[i];
                count = i;
            }
        }
        printf("the maximum sum of the row of the array is : %d\n",max);
        printf("the row number of the matrix is : %d",count);
    return 0;
}