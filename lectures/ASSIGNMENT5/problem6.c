#include <stdio.h>
void reverseInteger(int n){
    //first making an array and storing that number in that array 
    int arr[50];
    int i = 0;
    while (n != 0){
        arr[i] = n%10;
        n/=10;
        i++;
    }
    //if we print the arry then the number will be printed in the reverse manner
    printf("The number in reverse order is : ");
    for(int j = 0;j<i;j++){
        printf("%d",arr[j]);
    }
}
int main(){
    int num;
    printf("Please enter the integer : ");
    scanf("%d",&num);
    reverseInteger(num);
    return 0;
}