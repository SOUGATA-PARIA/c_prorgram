#include <stdio.h>
int input ()
{
    int n;
    printf("please enter the number : ");
    scanf("%d", &n);
    return n;
}

int size()
{
    int a;
    printf("please enter the size : ");
    scanf("%d", &a);
    return a;
}

void binary(int number, int arr[])
{
    int i = 0;
    while (number != 0)
    {
        arr[i] = number % 2;
        number /= 2;
        i++;
    }
}

    void output (int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }

int main()
{
    int siz;
    siz = size();
    int arr[siz];
    int number;
    number = input();
    binary(number,arr);
    output(arr,siz);
    return 0;
}