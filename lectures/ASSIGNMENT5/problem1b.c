#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a;
    printf("Please enter the first number(a) : ");
    scanf("%d", &a);
    int b;
    printf("Please enter the second number(b) : ");
    scanf("%d", &b);
    // making pointers of a and b
    int *x = &a;
    int *y = &b;
    swap(x, y);
    printf("after swaping : a = %d and b = %d", a, b);
    return 0;
}