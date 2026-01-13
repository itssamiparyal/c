// Program to find power of a given number. Hint: pow(a,b), a and b are user inputs.

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, result;

    printf("Enter base and exponent: ");
    scanf("%lf %lf", &a, &b);

    result = pow(a, b);

    printf("Result = %.2lf\n", result);

    return 0;
}
