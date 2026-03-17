#include <mem.h>
#include <string.h>
#include <stdio.h>
int main()
{
    char a[] = "Hello world";
    int i;
    printf("Before memset:%s", a);
    printf("After memset:%s\n", memset(a, '*', 10));
    for (i = 0; i < 12; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}