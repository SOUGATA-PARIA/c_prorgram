#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is a power of two
    // A number is a power of two if it has only one bit set in its binary representation
    if (num > 0 && (num & (num - 1)) == 0) {
        printf("%d is a power of two.\n", num);
    } else {
        printf("%d is not a power of two.\n", num);
    }

    return 0;
}