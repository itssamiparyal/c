#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;
    float avg;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("\nFirst %d natural numbers:\n", n);

    while (i <= n)
    {
        printf("%d ", i);
        sum += i;
        i++;
    }

    avg = (float)sum / n;

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", avg);

    return 0;
}