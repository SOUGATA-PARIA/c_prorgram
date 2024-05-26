#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];

    //taking input for the array elements 
    for (int i = 0; i <n ; i++)
    {
        printf("please enter the element number %d of the array : ",i+1);
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for (int i=0;i<n;i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("the largest element of the array is : %d ",min);

    
    return 0;
}