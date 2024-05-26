#include <stdio.h>

void greet ()
{
    printf("congarts...");
    printf("you won the match..");
    printf("would you like to attempt new one ??");
    return;
}
int main ()
{
    int n;
    printf("good morning ");
    printf("please enter 1 or 2 ");
    scanf("%d",&n);

    switch (n)

    {
        case 1:
            greet();
    

        case 2:
    
        printf("you lost");

        default :
        break;
    }
    return 0;
}