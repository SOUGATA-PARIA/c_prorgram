// We are going to take an input string and then we will count the number of vowels present there

#include <stdio.h>
#include <string.h>
//funtion for calculating the length of the entered string 


int size(char str[]){
    int i = 0;
    int len = 0;
    while(str[i] != '\0'){
        i++;
        len++;
    }
    return len;
}
int main(){
    char str[1000];
    puts("Please enter the sentence : ");
    gets(str);
    //now clalling the function calculating the size of the entered string
    int length = size(str);

    // even you can use the inbuilt function
    // int  length = strlen(str);

    // now making an integer type array for storing the values of no of vowels
    // and giving the default value 0

    int vowel[5] = {0,0,0,0,0};
    //now writing code for calculating the number of vowels
    for(int i = 0;i<length;i++){
        if(str[i] == 'a'){
            vowel[0] +=1;
        }
        else if(str[i] == 'e'){
            vowel[1] +=1;
        }
        else if(str[i] == 'i'){
            vowel[2] +=1;
        }
        else if(str[i] == 'o'){
            vowel[3] +=1;
        }
        else if(str[i] == 'u'){
            vowel[4] +=1;
    }
    }
    // now printing the number of vowels
    printf("The number of 'a' in the statement is : %d \n",vowel[0]);
    printf("The number of 'e' in the statement is : %d \n",vowel[1]);
    printf("The number of 'i' in the statement is : %d \n",vowel[2]);
    printf("The number of 'o' in the statement is : %d \n",vowel[3]);
    printf("The number of 'u' in the statement is : %d \n",vowel[4]);
    return 0;
}