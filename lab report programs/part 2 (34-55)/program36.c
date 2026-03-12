#include <stdio.h>

int main()
{
    int c;
    float f;

    printf("Celsius\tFahrenheit\n");

    for (c = 0; c <= 100; c++)
    {
        f = (c * 9.0 / 5.0) + 32;
        printf("%d\t%.2f\n", c, f);
    }

    return 0;
}