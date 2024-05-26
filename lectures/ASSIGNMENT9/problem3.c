#include <stdio.h>
#include<stdlib.h>
//creating a structure of student
typedef struct student {
    char enrollment[10];
    char name[30];
    int year;
    int departmentNumber;
    float cgpa;
}student;
void read (student* students,int n){
    

}
int main(){
    int n;
    printf("Please enter the number of student : ");
    scanf("%d",&n);
    student* students = (student*) malloc(n*sizeof(student));
    read (students,n);
    return 0;
}