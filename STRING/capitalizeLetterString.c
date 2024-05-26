#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    puts("please enter the string : ");
    gets(str);
    //now counting the size of the string 

    int i = 0;
    int size = 0;
    while (str[i] != '\0')
    {
        size++;
        i++;
    }
    for(int j = 0;j<size;j++)
    {
        if(str[j] <='z' && str[j] >= 'a')
        {
            str[j] = str[j] - 'a' + 'A';
        }
    }
    //printing the string in upper case
    puts(str);
    return 0;
}