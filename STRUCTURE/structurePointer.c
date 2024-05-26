#include <stdio.h>
#include <string.h>
/*
Normally structures are passed by values therefore we can not change the datas completely
for the concept of pass by reference we must use the concept of pointer 
*/

// let us declare the structure our college
typedef struct college {
    char name[30];
    int yearOfEstablishment;
    int nirfRank;
    int area;
} college;

void change (college *c){
    (*c).area = 4000;
    (*c).nirfRank = 3;
    strcpy(c->name,"IIT kharagpur");
    c->yearOfEstablishment = 1913;
}
/*
    There are two methods of pointing the structure pointers
    first one is ===> (*c).attribute
                    here you must have to use () or you will get error
    second one is ===> c->attribute
                    the socond one is more cleaner and try to practice this format 
                    bcz you are going to use this format in tree, hashmap etc.
*/
int main(){
    college a;
    strcpy(a.name,"IIEST shibpur");
    a.yearOfEstablishment = 1856;
    a.area = 123;
    a.nirfRank = 23;

    printf("%s\n",a.name);
    printf("%d\n",a.yearOfEstablishment);
    printf("%d\n",a.nirfRank);
    printf("%d\n\n\n\n",a.area);

    change(&a);

    printf("%s\n",a.name);
    printf("%d\n",a.yearOfEstablishment);
    printf("%d\n",a.nirfRank);
    printf("%d\n",a.area);
}

/* 
    there is a concept of union where you can use the concept structure but to save memory 
    using union it will take the largest memory of the declared attribute of the union

    the declaration look like this

    union book{
        attributes////
    };
    
*/