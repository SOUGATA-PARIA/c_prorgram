#include <stdio.h>
#include <string.h>
void reverse(char str[]){
    //we are going to use two pointer method
    //first finding the size of the entered string
    int i = 0;
    int size = 0;
    while(str[i] != '\0'){
        i++;
        size++;
    }
    //now we are going to reverse the string
    for(int i = 0,j = size-1-i;i<j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main(){
    char str[100];
    puts("Please enter the statement  : ");
    gets(str);

    // now calling the function to reverse the string
    reverse(str);
    printf("The reverse of the string is : \n");
    puts(str);
    return 0;
}