#include <stdio.h>

int sumdigits(int num)
{
    int digit, sum = 0;

    while (num != 0)
    {
        digit = num % 10;  // get last digit
        sum = sum + digit; // add digit to sum
        num = num / 10;    // remove last digit
    }

    return sum;
}

int main()
{
    int number, result;

    printf("Enter a five digit number: ");
    scanf("%d", &number);

    result = sumdigits(number);

    printf("Sum of digits = %d", result);

    return 0;
}