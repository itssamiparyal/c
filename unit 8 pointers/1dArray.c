// 1d array:
// normal  pointer
// &a[i] = a+i
// a[i] = *(a+i)

// 2d array:
// normal pointer
// &a[i][j] = *(a+i)+j
// a[i][j] = *(*(a+i)+j)

#include <stdio.h>

int main()
{
    int a[5];
    // how to enter the values using a+i
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", a + i);
    }
    printf("Without pointer:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%u->%d\n", &a[i], a[i]);
    }
    printf("\nUsing pointer:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%u->%d\n", &a[i], a[i]);
    }
}