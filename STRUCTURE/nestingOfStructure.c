#include <stdio.h>
int main(){
    /*
    The concept of nesting is like making a structure inside a structure
    you can simply say that if a structure is made before then you 
    if you are making an object of previously made structure inside a structure then this is called 
    structure nesting

    A special point to remember that you can not make an structure inside that structure

    like a supercar has all the attributes of an normal car but it has some special features
    like it has a high speed
    it has low milage
    it has high price
    it has more powerful engine

    You can take example of the project manager of a company
    He/She has attributes of a normal employee
    but he/she has few extra advantages
    they have special power of product managing
    they can select team members working on a project

    */

    struct employee{
        int salary ;
        char employee_id[30];
        float year_of_experience;
        int level;
    };
    struct manager{
        float time ;
        char dress[50];
        char responsibility[30];
        struct employee x;
    };
    return 0;
}