#include <stdio.h>
int main (){
    int row,column;
    int index,count;
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
        count = 0;
        for(int j=0;j<column;j++){
            if(arr[i][j]==1){
                count +=1;
            }
            }
            brr[i]=count;
        }
        int max = brr[0];
        for(int i = 0;i<row; i++){
            if (max < brr[i]){
                max = brr[i];
                index = i;
            }
        }
        printf("the row having maximum number of 1 in the matrix is  : %d\n",index+1);
        printf("the number of 1 in that row  is : %d",max);
    return 0;
}