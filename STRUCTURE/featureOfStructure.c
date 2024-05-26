/*
    The; feature of structure is that it can compare two structures and it 
    also make a deep copy not a shallow copy.
    you can directly copy the entire stucture from the another one using assignment operator

*/
#include <stdio.h>
#include <string.h>
int main(){
    // now making a structure of bikes
    typedef struct bike {
        char CompanyName[20];
        char name[20];
        float price;
        int cc;
    }bike;
    bike a;
    bike b;
    strcpy(a.CompanyName,"bajaj");
    strcpy(a.name,"pulsar");
    a.price = 120000;
    a.cc = 150;

    // Now making the structure copy
    b = a;
    // now let us check whether the copy is done or not
    printf("%s\n",b.name);

    // Now let us check whether deep copy or shallow copy is made
    strcpy(b.name,"iron883");
    printf("%s\n",a.name);
    printf("%s\n",b.name);
    // As it is printing different names then it means that a deep copy is made
    return 0;
}