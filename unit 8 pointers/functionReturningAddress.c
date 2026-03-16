// Pointer type function
#include <stdio.h>

int large(int x, int y)
{
    return (x > y) ? x : y;
} // this function indicates the return type
int *largest(int *x, int *y)
{
    return (*x > *y) ? x : y; // return memory address
} // returning adress
void main()
{
    int a, b;
    printf("the large number is:%d\n", large(5, 6));
    printf("Enter the value of a and b:\n");
    scanf("%d %d", &a, &b);
    printf("the large number is:%d\n", *(largest(&a, &b)));
}