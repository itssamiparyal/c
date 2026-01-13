// Program to find area and circumference of circle.

#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of circle = %.2f\n", area);
    printf("Circumference of circle = %.2f\n", circumference);

    return 0;
}
