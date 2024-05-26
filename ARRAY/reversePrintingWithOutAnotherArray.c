#include <stdio.h>

void reverse (int arr[],int n)
{
    int i;
    int j;
    int a = 0;
    int b =(n-1)-a;
    int temp;
    while (a<b)
    {
        i=arr[a];
        j=arr[b];
        temp = i;
        i = j;
        j = temp;
        arr[a]=i;
        arr[b]=j;
        a++;
        b--;
    }
    return;
}
int main ()
{
    int n;

    printf("please enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0;i<n;i++)
    {
        printf("please enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    reverse(arr,n);

    for (int i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}