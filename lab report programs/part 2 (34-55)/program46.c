#include <stdio.h>

int main()
{
    int num, original, reversed = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        digit = num % 10;                 // extract last digit
        reversed = reversed * 10 + digit; // build reversed number
        num = num / 10;                   // remove last digit
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}