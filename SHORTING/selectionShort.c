/*
    The concept working on the selection short is that
    select the smallest element of the array and put that at starting and go further
    after putting the smallest element remove that from count i.e leave that index
*/

#include <stdio.h>
int main()
{
    int size;
    printf("Please enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    // taking input for the array elements
    for (int i = 0; i < size; i++)
    {
        printf("Please enter the element no : %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Printing the given array in the unsorted manner
    printf("The given array in the unsorted manner is : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // selection sort algorithm
    // for (int i = 0; i < size; i++)
    // {
    //     int min = arr[i];
    //     int minindex = -1;
    //     for (int j = i+1; j < size; j++)
    //     {
    //         if (min > arr[j])
    //         {
    //             min = arr[j];
    //             minindex = j;
    //         }
    //     }
    //         int temp = arr[minindex];
    //         arr[minindex] = arr[i];
    //         arr[i] = arr[minindex];
        
    // }

    for (int i = 0; i < size - 1; i++)
{
    int min = arr[i];
    int minindex = i;
    for (int j = i + 1; j < size; j++)
    {
        if (min > arr[j])
        {
            min = arr[j];
            minindex = j;
        }
    }
    // Swap the elements
    int temp = arr[i];
    arr[i] = arr[minindex];
    arr[minindex] = temp;
}
    // Printing the given array in the sorted manner
    printf("\nThe given array in the sorted manner is : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
        return 0;
}