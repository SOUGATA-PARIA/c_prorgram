// The concept of optimized bubble short is
// to check in each loop i.e after the every pass check whether the array is shorted or not
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int size;
    printf("Please enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    // Now taking input for the array elements
    for (int i = 0; i < size; i++)
    {
        printf("Please enter the element number : %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    // printing the unshorted array
    printf("\nThe given array in the unshorted manner is : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    // Now writing code for optimized bubble sort
    for (int i = 0; i < size - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    // printing the shorted array
    printf("The given array in the shorted manner is : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}