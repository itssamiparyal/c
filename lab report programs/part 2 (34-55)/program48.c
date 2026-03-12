#include <stdio.h>

int main()
{
    int i;
    int a = 0, b = 1, c;

    printf("First 25 Fibonacci numbers:\n");

    for (i = 1; i <= 25; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}