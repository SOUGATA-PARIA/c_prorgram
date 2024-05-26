#include <stdio.h>
#include <string.h>
int main(){
    // typedef struct pokemon{
    //     int hp;
    //     int speed;
    //     int attack;
    //     char tier;
    // } pokemon;

    // pokemon arr[10];
    // arr[0].attack = 50;
    // arr[0].hp = 100;
    // arr[0].speed = 30;
    // arr[0].tier = 'A';

    // Let we are making a list or collection of cars of different indian brand 
    // it is probably two brand "TATA" & "MAHINDRA"

    struct car{
        char name[20];
        int hp;
        float price;
        int topSpeed;
    };

    struct car tata[3];

    strcpy(tata[0].name,"NIXON");
    tata[0].hp = 1500;
    tata[0].price = 560000;
    tata[0].topSpeed = 130;

    strcpy(tata[1].name,"TIAGO");
    tata[1].hp = 1200;
    tata[1].price = 460000;
    tata[1].topSpeed = 120;

    strcpy(tata[2].name,"HARRIER");
    tata[2].hp = 3500;
    tata[2].price = 3060000;
    tata[2].topSpeed = 230;

    printf("%s\n",tata[0].name);
    printf("%d\n",tata[0].hp);
    printf("%.2f\n",tata[0].price);
    printf("%d\n",tata[0].topSpeed);
    printf("\n");

    printf("%s\n",tata[1].name);
    printf("%d\n",tata[1].hp);
    printf("%.2f\n",tata[1].price);
    printf("%d\n",tata[1].topSpeed);
    printf("\n");

    printf("%s\n",tata[2].name);
    printf("%d\n",tata[2].hp);
    printf("%.2f\n",tata[2].price);
    printf("%d\n",tata[2].topSpeed);
    printf("\n");
    
    return 0;
}