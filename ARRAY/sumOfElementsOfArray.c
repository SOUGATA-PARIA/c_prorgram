#include <stdio.h>
int main()
{
    // taking input from user

    int n;
    printf("please enter the size of the array : ");
    scanf("%d", &n);

    int sum = 0;

    // defining the array

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("please enter the element no %d : ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("the sum of all the elements of array is : %d", sum);

    return 0;
}