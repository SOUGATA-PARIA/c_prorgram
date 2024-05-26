#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// now making the structure

typedef struct student{
    int rollNo;
    char name[20];
    char department[20];
    char course[20];
    int YearOfJoining;
}student;
// void check(student s1,student s2){
//     int i = 0;
//     bool flag = true;
//     while (s1.department != '\0' || s2.department != '\0'){
    //
    //bhai character check karna tha
    // pura department array thordi null hai issiliye error aaraha hai
    //
//         if(s1.department[i] != s2.department[i]){
//             flag = false;
//             break;
//         }
//         i++;
//     }
//     if(flag == true){
//         printf("The students are from same department .");
//     }
//     else
//     {
//         printf("The students are not from same department .");
//     }

// }



void check(student s1, student s2) {
    int i = 0;
    bool flag = true;
    while (s1.department[i] != '\0' || s2.department[i] != '\0') {
        if (s1.department[i] != s2.department[i]) {
            flag = false;
            break;
        }
        i++;
    }
    if (flag == true) {
        printf("The students are from the same department.\n");
    } else {
        printf("The students are not from the same department.\n");
    }
}


int main(){
    student s1;
    student s2;
    
        printf("please enter the name of the first student : ");
        gets(s1.name);
        printf("Please enter the department of the student : ");
        getchar();
        gets(s1.department);
        printf("Please enter the course of the student : ");
        getchar();
        gets(s1.course);
        printf("Please enter the roll no of the student : ");
        scanf("%d",&s1.rollNo);
        printf("please enter the year of joining of the student : ");
        scanf("%d",&s1.YearOfJoining);
        getchar();
        
        printf("please enter the name of the second student : ");
        gets(s2.name);
        printf("Please enter the department of the student : ");
        getchar();
        gets(s2.department);
        printf("Please enter the course of the student : ");
        getchar();
        gets(s2.course);
        printf("Please enter the roll no of the student : ");
        scanf("%d",&s2.rollNo);
        printf("please enter the year of joining of the student : ");
        scanf("%d",&s2.YearOfJoining);
        // getchar();

    check(s1,s2);
    return 0;
}