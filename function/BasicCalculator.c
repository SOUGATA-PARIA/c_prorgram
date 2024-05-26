#include <stdio.h>
int add (int x ,int y)
{
    return x+y;
}
int sub (int x,int y)
{
    return x-y;
}
int mul (int x ,int y)
{
    return x*y;
}
int div (int x,int y)
{
    return x/y;
}
int pow (int x,int y)
{
    int power=1;
    for (int i = 1;i<=y;i++)
    {
        power*=x;
    }
    return power;
}
int main ()
{
    int n;
    printf("please enter 1 for doing addition \n");
    printf("please enter 2 for doing subtraction \n");
    printf("please enter 3 for doing multiplication \n");
    printf("please enter 4 for doing division \n");
    printf("please enter 5 for finding power \n");
    scanf("%d",&n);


    switch (n)
    {
        case 1:
            int a,b;
            printf("please enter two numbers : ");
            scanf("%d%d",&a,&b);
            int sum = add(a,b);
            printf("%d",sum);

        case 2:
            int c,d;
            printf("please enter two numbers : ");
            scanf("%d%d",&c,&d);
            int subtraction = sub(c,d);
            printf("%d",subtraction);

        case 3:
            int e,f;
            printf("please enter two numbers : ");
            scanf("%d%d",&e,&f);
            int product = mul(e,f);
            printf("%d",product);

        case 4:
            int g,h;
            printf("please enter two numbers : ");
            scanf("%d%d",&g,&h);
            int resultant = div(g,h);
            printf("%d",resultant);

        case 5:
            int i,j;
            printf("please enter two numbers : ");
            scanf("%d%d",&i,&j);
            int power1 = pow(i,j);
            printf("%d",power1);

        default :
        printf("please enter a valid number : ");

    }

    return 0;

}