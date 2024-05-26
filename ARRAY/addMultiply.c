// program for a array in which
// odd indexed part is multiplied by 2
// and even indexed portion is added by 10

#include <stdio.h>
int main()
{
    int n;
    printf("please enter the size of the array : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("please enter the element number %d : ", i + 1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] *= 2;
        }
        else
        {
            arr[i] += 10;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}