#include <stdio.h>
int main()
{
    // char ch[] = "vikram is a good programmer ";
    // char* ptr = ch;
    // // printf("%s",ch);
    // printf("%s\n",ptr);
    // printf("%c",ptr[2]);

    // now creating a string using only pointer
    // char* ptr = "vikram is a good java programmer ";
    // printf("%s\n",ptr);
    // printf("%c\n",ptr[0]);
    // printf("%c\n",ptr[1]);
    // printf("%c\n",ptr[2]);

    /*now checking the reference and the changes for the 
    normal initialization*/
    /*
    according to the concept we can not change the complete string 
    but you can change the indivisual characters
    */
    // char str[] = "vikram  is a good java programar.";
    // //str = "Sougata will do great in his carrier";//worning generated
    // // can not assign an complete string

    // /*now  trying to change the indivisual characters*/ // and it changes also

    // str[0] = 'S';
    // str[1] = 'o';
    // str[2] = 'u';
    // str[3] = 'g';
    // str[4] = 'a';
    // str[5] = 't';
    // str[6] = 'a';

    // printf("%s",str);
    char* ptr = "Sougata will do great in his carrier .";

    printf("%s\n",ptr);
    printf("%c",ptr[1]);
    return 0;
}