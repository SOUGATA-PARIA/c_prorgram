#include <stdio.h>
int main ()
{
    char inputChar;//making variable for input
    printf("please enter the character : ");//asking user to give input
    scanf("%c",&inputChar);//storing the input

    //printing ASCII value of given character
    printf("the ASCII value of the given character %c is : %d\n",inputChar,inputChar);

    //intializing nxtChar (next character of the given character)
    char nextChar = inputChar +1;

    //printing ASCII value and the next charcter of the given input
    printf("the next character of the given character is %c : ",nextChar);
    printf("\nthe ASCII value of next character of the given character is  : %d",nextChar);
    return 0;
}