#include <stdio.h>

int main()
{
    int n, i, j;
    float sum = 0;
    int fact;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = 1;

        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        sum = sum + (float)i / fact;
    }

    printf("Sum of the series = %.4f", sum);

    return 0;
}