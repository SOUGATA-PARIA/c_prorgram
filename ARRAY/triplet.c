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

    int totaltriplet = 0;

    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == n)
                {
                    printf("(%d,%d,%d) ", arr[i], arr[j], arr[k]);
                    totaltriplet++;
                }
            }
        }
    }
    printf("\nthe total number of pair is : %d ", totaltriplet);

    return 0;
}