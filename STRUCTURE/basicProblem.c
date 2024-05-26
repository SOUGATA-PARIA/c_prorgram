#include <stdio.h>
#include <string.h>
int main()
{
    // making a structure of person
    struct person
    {
        char name[50];
        int salary;
        int age;
    };
    //now making the two objects for this
    struct person suraj;
    strcpy(suraj.name,"Suraj Meena");
    suraj.salary = 100000;
    suraj.age = 18;

    struct person shikha;
    strcpy(shikha.name,"Shikha Mahoto");
    shikha.age = 20;
    shikha.salary = 150000;

    printf("%s\n",suraj.name);
    printf("%d",shikha.salary);
    
    return 0;
}