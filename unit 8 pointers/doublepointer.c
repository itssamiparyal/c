#include <stdio.h>

int main()
{
    int a = 100;
    int *ptr = &a;
    int **dptr = &ptr;

    printf("%d", a);
    printf("%d", *ptr);
    printf("%d", **dptr);
    return 0;
}