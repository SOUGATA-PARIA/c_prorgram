#include <stdio.h>
int main ()
{
    int n;
    printf("please enter size of the array  : ");
    scanf("%d",&n);

    int arr[n];
    int count = 0;

    for (int i=0;i<n;i++)
    {
        printf("please enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        count +=arr[i];
    }

    printf("the sum of odd numbers is : %d ",count);

    return 0;
}