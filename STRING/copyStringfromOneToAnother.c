// To copy one string from another first
// initialize a String and the count the size of the 
// string and using loop copy indivisual characters

#include <stdio.h>
int main()
{
    char str1[] = "vikram is sougata who a good java programmer";
    int size = 0;
    // now calculating the size of the string
    int i = 0;
    while (str1[i] != '\0')
    {
        ++size;
        ++i;
    }
    
    // Now making a string of calculated size

    i = 0;
    char str2[size];
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    
    // printing the shallow copied string
    printf("%s",str2);
    
    return 0;
}