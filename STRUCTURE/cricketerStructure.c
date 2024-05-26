#include <stdio.h>
#include <string.h>
int main(){
    typedef struct cricketer {
        char name[20];
        float age;
        int noOfTestMatches;
        float averageRuns;
    }cricketer;

    cricketer arr[3];
    for(int i = 0;i<3;i++){
        puts("please enter the name of the player");
        gets(arr[i].name);
        
        puts("please enter the age of the cricketer");
        //gets(arr[0].age);
        /*
        The error in your code is due to the incorrect usage of the gets function. 
        The gets function is used to read a string from the standard input (keyboard) and 
        store it in the specified variable. 
        However, the gets function is considered unsafe and is not recommended for use
        because it does not perform any bounds checking, 
        which can lead to buffer overflow vulnerabilities
        */
        scanf("%f",&arr[i].age);
        puts("Please enter the number of test matches the player had played");
        scanf("%d",&arr[i].noOfTestMatches);
        puts("Please enter the average runs of the cricketer");
        scanf("%f",&arr[i].averageRuns);
        getchar();
        /*
            getchar(); is very important because when gets() function find the next line character
            i.e "\n" the function gets terminated . To recall this function we must use the getchar()
            function. otherwise if you do not use this getchar function you will not be able to take 
            input for the name of the second and next plyers.
        */
    }

    /*now printing the values of the given crickers*/
    printf("\n\n\n\n");
    for(int i = 0;i<3;i++){
        printf("The name of the cricketer is : %s\n",arr[i].name);
        printf("The age of the cricketer is : %.2f\n",arr[i].age);
        printf("The number of test matches played by the cricker is : %d\n",arr[i].noOfTestMatches);
        printf("The average runs scored by the cricketer is : %f\n\n\n",arr[i].averageRuns);
    }
    return 0;

}