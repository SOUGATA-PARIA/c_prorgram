#include <stdio.h>
#include <math.h>
#include <limits.h>
/*if we do not use  #include <stdio.h> then we will get an error
the error is 
warning: implicit declaration of function 'printf'
*/
int main(){
    printf("hello ");
    float x = sqrt(2);
    printf("%f\n",x);
    float y = cbrt(8);
    printf("%f\n",y);
    int m = INT_MAX;
    printf("%d",m);
}