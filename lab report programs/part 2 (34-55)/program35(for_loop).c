// for loop
#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    float avg;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("\nFirst %d natural numbers:\n", n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }

    avg = (float)sum / n;

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", avg);

    return 0;
}