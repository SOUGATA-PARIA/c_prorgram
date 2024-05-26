#include <stdio.h>
#include <string.h>
int main()
{
    int similar = 1;
    char str1[50];
    char str2[50];
    printf("Please enter the first string : ");
    fgets(str1, 50, stdin);
    printf("Please enter the second string : ");
    fgets(str2, 50, stdin);
    // comparing the strigs whether they are similar or not
    int i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            similar = 0;
            break;
        }
        i++;
    }
    if (similar)
    {
        printf("The given strings are similar \n");
    }
    else
        printf("The given strings are not similar \n");
    return 0;
}