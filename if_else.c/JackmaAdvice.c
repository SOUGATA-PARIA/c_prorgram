#include <stdio.h>
int main()
{
    printf("please tell your age and I will suggest you what you should you do now \n");
    float age;
    printf("please enter your age in years : ");
    scanf("%f", &age);
    if (age > 0 && age < 100)
    {
        if (age > 0 && age < 7)
        {
            printf("I don't think it is your age lol \n");
            printf("let your baby  enjoy the environment with you \n");
            printf("Don't let your baby play videogame");
        }
        else if (age >= 7 && age < 12)
        {
            printf("start your formal education and continue \n");
            printf("play outdoor and indoor games not video game");
        }
        else if (age >= 12 && age < 18)
        {
            printf("continue your formal education \n");
            printf("start exploring your interesting fields.....");
        }
        else if (age >= 18 && age < 25)
        {
            printf("if you are not in your desired domain , try to change and come into your favourite domain\n");
            printf("if you are in your favourite domain then keep working on it....\n");
            printf("start researching in your interested domain , like reading books , listening podcast  ...etc ...");
        }
        else if (age >= 25 && age < 30)
        {
            printf("try to become financially independent in your life......\n");
            printf("you can plan a family too at this age period...");
        }
        else if (age >= 30 && age < 50)
        {
            printf("if you are not financially independent now .....first try to get it....");
            printf("if you are financially independent then start doing some social work....\n");
            printf("help your jouniors to with your experience & learnings...");
        }
        else if (age >= 50 && age < 65)
        {
            printf("try to become spiritual and get come in touch of a spiritual guru...");
        }
        else if (age >= 65 && age < 100)
        {
            printf("enjoy your life with your grand childs \n");
            printf("become spiritually strong ");
        }
    }
    else
    {
        printf("please enter a valid age ");
    }
    return 0;
}