#include <stdio.h>
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

    int x;
    printf("please enter the number which you want to search : ");
    scanf("%d",&x);

    for (int i = 0;i<n;i++)
    {
        if (arr[i] == x){
        printf("%d ",i);}
    }

    return 0;
}