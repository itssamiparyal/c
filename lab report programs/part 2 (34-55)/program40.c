#include <stdio.h>

int main()
{
    int n, i;
    float x, sum = 1;

    printf("Enter value of x: ");
    scanf("%f", &x);

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i * x * x;
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}