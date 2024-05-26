#include <stdio.h>
int main ()
{
    int marks[10];//initializing marks array of size 10

    //making a for loop for taking input from user \addinde
    
    for (int i = 0; i < 10; i++)
    {
        printf("please enter the marks of student no %d : ",i+1);
        scanf("%d",&marks[i]);
    }


    //printing the index for the marks less than 35

    for (int i=0;i<10;i++)
    {
        if (marks[i]<35)
        {
            printf("%d ",i);
        }
    }
    
    return 0;
}