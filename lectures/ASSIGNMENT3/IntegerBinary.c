#include <stdio.h>
int input()
{
    int num;
    printf("please enter the number : ");
    scanf("%d", &num);
    return num;
}

int binary(int number, int arr[], int size)
{
    int count = 0;
    int i = 0;
    while (number > 0)
    {
        arr[i] = (number % 2);
        number /= 2;
        count++;
        i++;
    }
    return count;
}

void output(int count, int arr[])
{
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int size = 50;
    int arr[size];
    int number = input();
    int count = binary(number, arr, size);
    output(count, arr);
    return 0;
}