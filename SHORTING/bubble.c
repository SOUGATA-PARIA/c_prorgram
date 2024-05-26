// Technique---> basic concept is based on swaping two numbers

// Explation---> The largest number goes to to the end point of the array and gradually all the element

// Optimization---> run the inner loop for (n-1-i) times and outerloop for (n-1) time ; here n is size

// complexity

// Concept of bubble short is swaping two numbers

/*if there is n elements in the array then we require (n-1) passes to short the array*/

#include <stdio.h>
int main()
{
    int size;
    printf("Please enter the size of the array : ");
    scanf("%d", &size);
    // making an integer type array of the given size
    int arr[size];
    // taking input for the array elements
    for (int i = 0; i < size; i++)
    {
        printf("please enter the element number : %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    // now printing the given array which is not shorted yet
    printf("The provided unshorted array is : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    // Now implementing the bubble short algorithm
    // here we will take the help of the nested loop
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Now printing the array in the shorted manner
    printf("\nThe given array in shorted form is : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}