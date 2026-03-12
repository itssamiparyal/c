#include <stdio.h>
#include <math.h>

int main()
{
    int i, N;
    float a, X = 0;

    printf("Enter value of a: ");
    scanf("%f", &a);

    printf("Enter value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 1)
            X = X + pow(a, i) / i;
        else
            X = X - pow(a, i) / i;
    }

    printf("Value of X = %f", X);

    return 0;
}