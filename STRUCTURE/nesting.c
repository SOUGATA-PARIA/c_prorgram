#include <stdio.h>
#include <string.h>
int main(){
    // As we can do nesting in loops, similarly we can do nesting in structure also
    // but there is a problem , you can not nest the structure inside itself
    // you can nest another structure (previously mentioned ) in another structure

    // now making a structure of cars
    // the we make a structures of supercars nesting normal car structure inside it
    // the we will make a premium supercar(like ferrari only billionier heritenced family can buy)

    typedef struct car{
        char CompanyName[20];
        char name[20];
        int hp;
        float price;
    } car;
    // Now making a stucture of supercars
    typedef struct supercar
    {
        car normal;// Nesting of car inside supercar
        int highestSpeed;
    }supercar;
    // Now making a structure of premium supercars
    typedef struct premiumSuperCar{
        supercar usual;
        char specialability[20];
    }premiumSuperCar;

    // Now providing the data of nested stuctures
    premiumSuperCar ferrari;
    strcpy(ferrari.specialability,"millionier heritage");
    ferrari.usual.highestSpeed = 290;// double nesting
    ferrari.usual.normal.hp=3500;// triple nesting

    // we can print this inputs using nesting concept

    printf("The hp of the car is : %d",ferrari.usual.normal.hp);
    return 0;
}