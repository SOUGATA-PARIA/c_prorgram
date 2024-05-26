// Find sum of first n natural numbers
#include <stdio.h>
int main()
{
    int n;                                                           // declaring the variable n
    printf("please enter the number till which you want to add : "); // asking the user to provide input
    scanf("%d", &n);                                                 // taking input from user and storing the value at n
    int sum = 0;                                                     // initializing a variable sum
    for (int i = 1; i <= n; i++)                                     // initializing for loop to run "n" number of times
    {
        sum = sum + i; // updating the value of sum
    }
    printf("the value of the addition of first %d numbers is equal to : %d", n, sum); // printing the output
    return 0;
}