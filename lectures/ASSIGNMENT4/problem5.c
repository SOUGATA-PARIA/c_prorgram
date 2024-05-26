#include <stdio.h>
#include <string.h>
int main (){
    printf("Please enter the statement : ");
    char str[100];
    fgets(str,100,stdin);
    int i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >='a'&& str[i] <= 'z'){
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }
    printf("The given string in capitalize format is : %s",str);
    return 0;
}