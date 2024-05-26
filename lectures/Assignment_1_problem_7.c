#include <stdio.h>
int main (){
    char inputChar;
    printf("please enter the single character : ");
    scanf("%c",&inputChar);
    //if the given character is in lower case 
    if (inputChar >= 'a' && inputChar <= 'z')
    {
        printf("the character in upper case is : %c",inputChar - 'a' + 'A');
    }

    //if the given character is in upper case
    else if (inputChar >= 'A' && inputChar <= 'Z'){
        printf("the given character in lower case is : %c",inputChar - 'A' + 'a');
    }

    //if the character is not an english alphabet
    else {
        printf("the unchanged character is : %c",inputChar);
    }
    return 0;
}