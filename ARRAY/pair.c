#include <stdio.h>
int main()
{

    int n;
    printf("please enter the desired number : ");
    scanf("%d", &n);

    int x;
    printf("please enter the size of the array : ");
    scanf("%d", &x);

    int arr[x];
    for (int i = 0; i < x; i++)
    {
        printf("please enter the element no %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int totalpair = 0;

    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (arr[i] + arr[j] == n)
            {
                printf("(%d,%d) ", arr[i], arr[j]);
                totalpair++;
            }
        }
    }
    printf("\nthe total number of pair is : %d ", totalpair);

    return 0;
}