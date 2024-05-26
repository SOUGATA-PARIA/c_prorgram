#include <stdio.h>
#include <string.h>
int main()
{
    int buffer = 1;
    char str[100];
    printf("Please enter the statement : ");
    fgets(str, 100, stdin);
    // to check the string whether it is pallindrome or not
    //  I am going to use two pointer method
    int size = strlen(str);
    int i = 0;
    for (int i = 0, j = size - 2 - i; i < j; i++, j--)//we are using size-2 bcz the null character is to  be excluded
    {
        if (str[i] != str[j])
        {
            buffer = 0;
            break;
        }
    }
    if (buffer)
        printf("The given string is a pallindrome \n");
    else
        printf("The given string is not a pallindrome \n");
    return 0;
}