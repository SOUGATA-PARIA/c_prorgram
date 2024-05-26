/*
there is an problem in array that you can only make  an array of homogenious type
that is when you make an array then and there you have to define the type of the array
once a array data type is declared then you can only store that kind of data only

for example int arr [50];
in this array you can only store integer datas.

but in the normal uses we need an heterogeneous typed memory location 
where we can store different types of datas 

Therefore we need structure
*/
//make a stucture on books having attribute name, price, edition, author name,

#include <stdio.h>
#include <string.h>
int main()
{
    struct book{
        char name[50];
        int edition;
        float price;
        char authorName[30];
    };

    //the elements are stored in a continious fashion(continious memory location as same as an array)

    // now making a new book a
    struct book a;
    printf("Please enter the name of the book : ");
    scanf("%[^\n]s",a.name);
    a.edition = 7;
    a.price = 752.960;
    // a.authorName = "kelvin peterson";
    
    printf("%s\n",a.name);
    //printf("%s\n",a.authorName);
    // As before we have declared the string i.e character array
    // we can not assign a string value directly . yes we can give values one by one
    // Therefore we are going to use copystring function [strcpy(a,b)] to give the data
    strcpy(a.authorName,"kelvin Peterson");
    printf("%s\n",a.authorName);
    printf("%.3f\n",a.price);
    printf("%d\n",a.edition);

    struct book book2;
    strcpy(book2.authorName,"James Clear");
    strcpy(book2.name,"Atomic Habbits");
    book2.price = 150;
    book2.edition = 12;

    printf("%s\n",book2.name);
    printf("%s\n",book2.authorName);
    printf("%f\n",book2.price);
    printf("%d\n",book2.edition);
    return 0;
}
/*
The structures are passed by value.
i.e when the structures are passed to a functions and if there is done
some changes but the original structure will not be changed
*/