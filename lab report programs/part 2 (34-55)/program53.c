#include <stdio.h>

int greater(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = greater(num1, num2);

    printf("Greater number = %d", result);

    return 0;
}