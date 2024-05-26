#include <stdio.h>
#include <string.h>
void swap(int a,char str[]){
    // code for reversing the string
    for(int i = 0, j = a-1;i<j;i++,j--){
        char temp;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

}
int main()
{
    char str[100];
    printf("Please enter the string : ");
    gets(str);
    //first we have to know the size of the string
    // to reduce the time complexity
    int k = 0;
    int size = 0;
    while (str[k] != '\0')
    {
        ++size;
        ++k;
    }
    // calling the function for reversing the string 
    swap(size,str);
    
    // printing the reverse string 
    
    puts("The reverse of the given string is : ");
    puts(str);
    return 0;
}