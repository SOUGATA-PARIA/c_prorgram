#include <stdio.h>
int main ()
{
    int n;

    printf("please enter the size of the array : ");
    scanf("%d",&n);

        int arr[n];

    for (int i = 0;i<n;i++)
    {
        printf("please enter the element no %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for (int i = n-1;i>=0;i--)
    {
    printf("%d  ",arr[i]);
    }
    return 0;
}