#include <stdio.h>
int main ()
{
    int n;
    printf ("please enter the size of the size of the array : ");
    scanf("%d",&n);

    int arr[n];

    int count = 0;

    for (int i=0;i<n;i++){
        printf("please enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++){
        count += arr[i];
    }

    count = count / n;

    printf("the average value of array element is : %d ",count);
}