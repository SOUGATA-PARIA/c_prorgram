#include <stdio.h>
#include <string.h>
void removeSpaces(char str[], char strring[])
{
    int i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            strring[j] = str[i];
            j++;
        }
        i++;
    }
}
int main()
{
    char str[100];
    char strring[100];
    puts("Please enter the sentence");
    gets(str);
    // calling the function to remove the spaces from the string
    removeSpaces(str, strring);
    puts(strring);
    return 0;
}