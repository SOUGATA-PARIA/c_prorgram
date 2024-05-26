#include <stdio.h>
int main ()
{
    int n;
    int x;
    printf("please enter the number  : ");
    scanf("%d",&x);

    int count = 0;

    printf("please enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("please enter the element  no %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>x)
        {
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}