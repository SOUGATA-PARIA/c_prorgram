/*The conceppt regarding this is that whether you can compare two structures directly or not*/
// you can not compare directly two structures
// you must have to use seperate elements of the structure of the array

#include <stdio.h>
#include <string.h>
int main()
{
    // now we are going to write a structure to store date
    // then we will make two same stucture then we will compare

    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;
    date a;
    date b;

    // Now fill the data of the date a
    a.day = 12;
    a.month = 01;
    a.year = 1863;
    // now filling the the data of the date b
    b.day = 26;
    b.month = 01;
    b.year = 2005;

    // now let us check directy using comparison operator to compare date a and date b
    // if(a==b){
    //     printf("The dates are equivallent ");
    // }
    //if you do this you will get an error 
    // 
    // invalid operands to binary ==

    // You will have to compare the all the datas seperately
    // like day of a and day of b
    // month of a  and month of b
    // year of a  and yeara of b

    if(a.day == b.day && a.month == b.month && a.year == b.year){
        printf("The given dates are same ");
    }
    else 
    {
        printf("The given dates are not same");
    }
    
    return 0;
}