
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
    size(siz);
    int arr[siz];
    int number;
    input(number);
    binary(number,arr);
    output(arr,size);
    return 0;
}