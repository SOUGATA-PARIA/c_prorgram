#include <stdio.h>
typedef float realNumber;
typedef int* integerPointer;
// typedef is used to rename a new thing 
// structure of typedef is    typedef oldname newname;
// once you have used typedef then you can use newname instead of old name
// the compiler will consider it as the olderone
int main(){
    int x;
    int a;
    integerPointer r = &a;
    //float y; //realNumbers
    realNumber y = 3.156;
    printf("%p\n",r);
    printf("%f",y);
    return 0;
}