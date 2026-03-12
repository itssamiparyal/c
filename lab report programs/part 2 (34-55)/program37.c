#include <stdio.h>

int main()
{
    int i, sum = 0;

    printf("First 10 even numbers are:\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", 2 * i);
        sum += 2 * i;
    }

    printf("\nSum of first 10 even numbers = %d", sum);

    return 0;
}