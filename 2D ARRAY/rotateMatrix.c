#include <stdio.h>
int main()
{
    int order;
    printf("please enter the order of the matrix : ");
    scanf("%d", &order);

    int arr[order][order];
    printf("please enter the elements of the matrix : \n");

    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("the matrix is : \n");
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            if(i<=j){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            }
        }
    }
    printf("the transposed matrix is : \n");
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0;i<order;i++){
        int k = order - 1;
        int j = 0;
        while(j<k){
            int temp = arr[i][k];
            arr[i][k]=arr[i][j];
            arr[i][j]=temp;
            j++;
            k--;
        }
    }
    printf("\n");
    printf("the rotated  matrix is : \n");
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}