#include <stdio.h>
#include <string.h>
void remove_space(char str[])
{
    // int i = 0;
    // while (str[i] != '\0')
    // {
    //     if(str[i] == ' ')
    //     {
    //         str[i] 
    //     }
    // }
    int count = 0;
    for(int i = 0;str[i];i++)
    {
        if(str[i] != ' ')
        {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}
int main()
{
    char str[100];
    puts("Please enter the string with white spaces : ");
    gets(str);
    remove_space(str);
    puts(str);
    return 0;
}