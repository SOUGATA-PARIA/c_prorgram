#include <stdio.h>
int main ()
{
    int n;

    printf("please enter the size of the the array : ");
    scanf("%d",&n);

    int arr[n];
    int brr[n];

    for (int i = 0;i<n;i++)
    {
        printf("please enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i<n;i++)
    {
        brr[i]=arr[i];
    }
    
    for (int i = 0;i<n;i++)
    {
        printf("%d ",brr[i]);
    }
    return 0;
}