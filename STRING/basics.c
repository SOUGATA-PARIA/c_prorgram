#include <stdio.h>
int main (){
    char arr[20] = "hello vikram ";
    //char arr[20] = {'h','e','l','l','o'};
    arr[0] = 98;
    int i = 0;
    while (arr[i] !='\0'){
        printf("%c",arr[i]);
        i++;
    }
}
