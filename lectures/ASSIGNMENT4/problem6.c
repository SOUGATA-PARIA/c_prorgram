#include <stdio.h>
#include <string.h>
int main ()
{
    char str[100];
    printf("Please entetr the string : ");
    fgets(str,100,stdin);
    int size = 0;
    int i = 0;
    while(str[i]!=0){
        if(str[i] == ' '){
            size++;
        }
        i++;
    }
    printf("The total number of words in the given string is : %d\n",size+1);
    return 0;
}