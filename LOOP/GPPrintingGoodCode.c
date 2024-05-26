#include <stdio.h>
int main()
{
    printf("please tell how many terms are you interested to print... : ");   // asking user to give input
    int n;                                                                    // declared a variable n
    scanf("%d", &n);                                                          // taking input from user and store the value at n
    int a;                                                                    // the first term of the GP
    int r;                                                                    // common ratio of the GP
    printf("please enter the first term of the Geomatric Progression : ");   // asking the user to provide the first term
    scanf("%d", &a);                                                          // stoing the value of a
    printf("please enter the common ratio of the Geomatric Progression : "); // asking the user to provide the common ratio
    scanf("%d", &r);                                                          // stoing the value of d
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a );
        a = a * r;
    }
    return 0;
}