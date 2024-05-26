// To use inbuilt functions of an array 
// We have to include a library named string
#include <string.h>
#include <stdio.h>
int main()
{
    char str[50];
    // Now you can use scanf function to take input and "%s" as a format specifier
    printf("Please enter the String : ");
    //scanf("%s",str);
    // The problem in this statement is that you can not print strings seperated by a whitespace
    //printf("The given input is : %s",str);

    // To avoid this you can use gets() and puts() function
    // gets(str);
    // //printf("The given input is : %s",str);
    // //puts("the given input is : ",str);  ----> you can not do this because puts() can take only one argument
    // puts("the given input is : ");// puts automatically shifts the cursor to the next line .
    // puts(str);

    // you can take input sentence using scanf function . 
    // but you have to provide some extra input parameter to take sentence as input

    scanf("%[^\n]s",str); // Do not use & before the string name  
    printf("The given input is : %s",str);
    return 0;
}