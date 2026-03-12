#include <stdio.h>

int main()
{
    int n, i;
    float x, sum = 0, term;

    printf("Enter value of x: ");
    scanf("%f", &x);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        term = 1;
        for (int j = 1; j <= i; j++)
        {
            term = term * x;
        }

        if (i % 2 == 0)
            sum = sum - term;
        else
            sum = sum + term;
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}