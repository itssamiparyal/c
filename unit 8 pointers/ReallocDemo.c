#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = (int *)malloc(20); // 20 bytes memory block, 5 * sizeof(int)
    printf("Enter the value in memory locations:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Item%d=", i + 1);
        scanf("%d", p + i);
    }
    // implementation of realloc
    p = (int *)realloc(p, 40); // reallocating the same block extension
    printf("p has %u adress\n", p);
    printf("Enter the values in additional memory locations:\n");
    for (int i = 5; i < 10; i++)
    {
        printf("Item%d=", i);
        scanf("%d", p + i);
    }
    printf("\nThe values are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}