#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    // Get coefficients from the user
    printf("Enter coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check if roots are real or complex
    if (discriminant >= 0)
    {
        // Real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and distinct:\n");
        printf("first root is  = %.2lf\n", root1);//(.2)is the precision specifier
        printf("second root is  = %.2lf\n", root2);
    } 
    else 
    {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(fabs(discriminant)) / (2 * a);//fabs is used to calculate absolute value of discriminent

        printf("Roots are complex and conjugate:\n");
        printf("first root is  = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("second root is  = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
    return 0;
}
