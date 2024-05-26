#include <stdio.h>
int main ()
{
    char str[] = "vikramaditya";
    char* ptr = str;//ptr now points to str[0]
    // printf("%p",ptr);
    // trying to print the address of a specific element of an string
    // printf("%p\n",&str[1]);
    // printf("%p\n",&str[0]);
    // printf("%p",str);
    int i = 0;
    // while (str[i] != '\0')
    // {
    //     printf("%c",str[i]);
    //     i++;
    // }
    while (*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
        //i++;
    }
    
    return 0;
}