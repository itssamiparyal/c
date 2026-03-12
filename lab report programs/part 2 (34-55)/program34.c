#include <stdio.h>

int main()
{
    int i;

    // for loop
    printf("\nFor Loop\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Hello World\n");
    }

    // While loop
    printf("\nWhile Loop\n");
    i = 1;
    while (i <= 10)
    {
        printf("I like Pizza!\n");
        i++;
    }

    // do While loop
    printf("\nDo While Loop\n");
    i = 1;
    do
    {
        printf("Goodbye!\n");
        i++;
    } while (i <= 10);

    return 0;
}