#include <stdio.h>
int main ()
{

    int n;
    printf("please enter the size of the array : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("please enter the element no %d : ", i + 1);
        scanf("%d", &arr[i]);

    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            sum-=arr[i];
        }
        else
        {
            sum+=arr[i];
        }
    }

    printf("%d",sum);

    return 0;
}