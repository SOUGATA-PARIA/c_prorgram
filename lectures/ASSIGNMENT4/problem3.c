#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Please enter the statement : ");
    fgets(str,100,stdin);
    int vowel[5] = {0,0,0,0,0};
    //now calculating the number of vowels int the statement 
    int size = strlen(str);
    for(int i = 0;i<size;i++){
        if(str[i] == 'a'){
            vowel[0]++;
        }
        if(str[i] == 'e'){
            vowel[1]++;
        }
        if(str[i] == 'i'){
            vowel[2]++;
        }
        if(str[i] == 'o'){
            vowel[3]++;
        }
        if(str[i] == 'u'){
            vowel[4]++;
        }
    }
    printf("The number of a in the statement is : %d\n",vowel[0]);
    printf("The number of e in the statement is : %d\n",vowel[0]);
    printf("The number of i in the statement is : %d\n",vowel[0]);
    printf("The number of o in the statement is : %d\n",vowel[0]);
    printf("The number of u in the statement is : %d\n",vowel[0]);
    return 0;
}