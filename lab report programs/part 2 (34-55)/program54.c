#include <stdio.h>
#include <math.h>

float series(int x, int n)
{
    int i;
    float sum = 0;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum - pow(x, i);
        else
            sum = sum + pow(x, i);
    }

    return sum;
}

int main()
{
    int x, n;
    float result;

    printf("Enter value of x and n: ");
    scanf("%d %d", &x, &n);

    result = series(x, n);

    printf("Sum of series = %.2f", result);

    return 0;
}