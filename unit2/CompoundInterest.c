#include<stdio.h>
#include<math.h>

int main(){
    float p,t,r,ci,si,diff;

    printf("Enter value of principle:\n");
    scanf("%f",&p);
    printf("Enter value of time:\n");
    scanf("%f",&t);
    printf("Enter value of rate:\n");
    scanf("%f",&r);

    ci = (p*pow((1+r/100),t))-p;
    si = (p*t*r)/100;
    diff = ci - si;

    printf("The compound interest of principle(%f), time(%f), rate(%f) = %f", p,t,r,ci);
    printf("The simple interest of principle(%f), time(%f), rate(%f) = %f", p,t,r,si);
    printf("The compound difference of simple interset(%f) and compound interest (%f) = %f", si , ci, diff);

    return 0;
}
