#include <stdio.h>
int check(int n, int arr[])
{
    int a = 0;
    int i = 0;
    while (i <= n / 2)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            a = 1;
            break;
        }
        i++;
    }
    return a;
}
int main()
{
    int size;
    printf("please enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("please enter the element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int flag = check(size, arr);
    if (flag == 0)
    {
        printf("the given array is a palindrome . ");
    }
    else
    {
        printf("the given array is not a palondrome . ");
    }
    return 0;
}
