#include <stdio.h>
int main()
{
    int a;                                         // declaring the variab "a"
    int b;                                         // declaring the variab "b"
    int g;                                         // declaring the variab "g"
    int hcf;                                       // declaring the variab "hcf"
    printf("please enter the greatest number : "); // asking the user to provide larger number
    scanf("%d", &a);                               // taking input and storing at "a"
    printf("please enter the smallest number : "); // asking the user to provide larger number
    scanf("%d", &b);                               // taking input and storing at "a"
    // for (int i=1;b != 0;i++)
    for (; b != 0;) // initialing the for loop to run just before when "b" becomes zero
    {
        g = a % b; // finding the remainder
        a = b;     // storing the value of "b" at value of "a" (updating the value of a)
        b = g;     // storing the value of "g" at "b" (updating the value of b)
    }
    
    hcf = a;                        // storing the value of "a" at "hcf"
    printf("the hcf is : %d", hcf); // printing the output
    return 0;
}