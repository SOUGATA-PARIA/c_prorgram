#include <stdio.h>
// function for calculating the sum of the array elements
int sum(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += arr[i];
    }
    return result;
}
int main()
{
    int size;
    printf("Please enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Please enter the elements of the array : \n");
    for (int i = 0; i < size; i++)
    {
        printf("Please enter the element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    // now calling the function for calculating the sum of the array elements
    int result = sum(arr, size);
    printf("The sum of the elements of the array is : %d", result);
    return 0;
}