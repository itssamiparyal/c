#include <stdio.h>

int main()
{
    int x = 10;
    float y = 10.5;
    void *vp;
    vp = &x;
    printf("Value of x:%d", *((int *)vp));
    vp = &y;
    printf("\nValue of y:%f", *((float *)vp));
    return 0;
}