#include<stdio.h>

int main(){
    int a = 100;
    int *p1 = &a;//*p is a pointer variable
    int **p2 = &p1;
    int ***p3 = &p2;
    //&a is memory location of a
    printf("value of a = %d\n",a);
    printf("Using pointer value of a = %d\n", *p1);
    printf("Using  double pointer value of a = %d\n", **p2);
    printf("Using  triple pointer value of a = %d\n", ***p3);
}