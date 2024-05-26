#include <stdio.h>
int main(){
    int n ;
    int symmetric = 1;
    int lowertriangular = 1;
    int diagonal = 1;
    int sum1 = 0;
    int sum2 = 0;

    printf("please enter the size of the matrix : ");
    scanf("%d",&n);

    int arr[n][n];
    
    printf("please enter the elements of the matrix : \n");
    for (int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("please enter the element of %d th row and %d th column : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("The given matrix is : \n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    // Now checking the conditions of the matrix
    // Whether the matrix is symmetric or not
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i][j] != arr[j][i]){
                symmetric = 0;
                break;
            }
        }
    }
    //whether the matrix is lowertriangular or not
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i<j && arr[i][j] != 0){
                lowertriangular = 0;
                break;
            }
        }
    }
    //whether the matrix is diagonal matrix or not
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i!=j && arr[i][j] != 0){
                diagonal = 0;
                break;
            }
        }
    }
    //sum of diagonal entries
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i==j){
                sum1+=arr[i][j];
            }
        }
    }
    //sum of off diagonal entries
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i+j == n-1){
                sum2+=arr[i][j];
            }
        }
    }
    //printing output
    if(symmetric == 1){
        printf("The given matrix is symmetric.\n");
        printf("\n");
    }
    else if(lowertriangular == 1){
        printf("The given matrix is a lower triangular matrix.\n");
        printf("\n");
    }
    else if(diagonal == 1){
        printf("The given matrix is a diagonal matrix.\n");
        printf("\n");
    }
    else{
        printf("The given matrix is not a special matrix.\n");
        printf("\n");
    }

    printf("The sum of leading diagonal entries is : %d\n",sum1);
    printf("\n");
    printf("The sum of off leading diagonal entries is : %d\n",sum2);
    printf("\n");
    return 0;
}