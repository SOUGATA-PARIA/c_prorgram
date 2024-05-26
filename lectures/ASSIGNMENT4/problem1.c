#include <stdio.h>
int main()
{
    int size;
    printf("Please enter the size of the array : ");
    scanf("%d", &size);

    // making an array of the given size
    int arr[size];
    // taking input from the user for the array
    for (int i = 0; i < size; i++)
    {
        printf("Please enter the element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    // code for finding the maximum element present within the array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // printing the maximum element of the given array
    printf("\nThe maximum element of the given array is : %d \n", max);
    // code for finding the minimum element presenet within the array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    // printig the minimum element of the given array
    printf("\nThe minimum element of the given array is : %d \n", min);
    return 0;
}