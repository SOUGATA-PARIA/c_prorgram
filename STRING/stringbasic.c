#include <stdio.h>
int main()
{
    // char ch = 'c';
    // int b = (int)ch;
    // printf("%d",b);
    // int z = 98;
    // char chh = (char)z;
    // printf("%c",z);
    // char arr[5] = {'a','e','i','o','u'};
    //printf("%c",arr[2]);
    // 
    //for (int i = 0; i < 5; i++)
    // {
    //     printf("%c ",arr[i]);
    // }
// A good" method for initializiation of an Strint that is using " "

    char brr[] = "Hello everyone, Vikram is here.";// '\0' is automatically added at the end of the string
    int i =0;
    while (brr[i] != '\0')
    {
        // There are four methods of printing the array element
        // 1) brr[i]    2) i[brr]      3)*(brr+i)       4)*(i+brr)
        printf("%c",brr[i]);//This is the preffered one 
        //printf("%c",i[brr]);
        //printf("%c",*(brr+i));
        //printf("%c",*(i+brr));
        i++;
    }
    return 0;
}