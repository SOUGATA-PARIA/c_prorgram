//concept of shallow copy 
// when you make a String and make a pointer on this 
// if you change on the string the change can be seen using the pointer

#include <stdio.h>
int main ()
{
    char str[] = "Sougata is a good java programmer ";
    char* ptr = str;
    printf("%s\n",ptr);

    //lets change in the str
    str[13] = 'w'; 
    str[14] = 'e'; 
    str[15] = 'l'; 
    str[16] = 'l'; 

    // now printing the string using ptr
    printf("%s",ptr);
    return 0;
}