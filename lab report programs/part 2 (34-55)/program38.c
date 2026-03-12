#include <stdio.h>

int main()
{
    int n, i, num, sum = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 5 == 0)
        {
            sum += num;
        }
    }

    printf("Sum of numbers divisible by 5 = %d", sum);

    return 0;
}