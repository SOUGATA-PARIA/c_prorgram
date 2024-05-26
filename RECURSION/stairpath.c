#include <stdio.h>
int way(int a)
{
    //if(a==1) return 1;
    //if(a==2) return 2;
    if(a==1 || a==2) return a;
    int recAns = way(a-1)+way(a-2);
    return recAns;
}
int main ()
{
    printf("please enter the number of steps : ");
    int step;
    scanf("%d",&step);
    int result = way(step);
    printf("the total nuber of way = %d",result);
    return 0;
}