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

    int max=arr[0];
    int secondmax = arr[0];

    for (int i=0;i<n;i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
    }

    for (int i=0;i<n;i++)
    {
        if (secondmax<arr[i] && max!=arr[i])
        {
            secondmax = arr[i];
        }
    }

    printf("the second largest element of the array is : %d ",secondmax);

    
    return 0;
}