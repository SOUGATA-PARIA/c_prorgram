#include <stdio.h>
int main ()
{
    int n;
    printf("please enter the size of the array : ");
    scanf("%d",&n);

    int product = 1;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("please enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
        product = product*arr[i];
    }
    printf("the product of all the elements of the array is : %d",product);
    
    return 0;
}