#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;
    printf("How many blocks:\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element:", i + 1);
        scanf("%d", ptr + i);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}