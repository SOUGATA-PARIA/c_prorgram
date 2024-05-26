#include <stdio.h>
#define PI 3.14159265359
// float area (float r){
//     return PI*r*r;
// }
#define area(r) (PI*r*r)//macro function
int main()
{
    // printf("%0.11f",PI);
    printf("%f",area(3.14));
}