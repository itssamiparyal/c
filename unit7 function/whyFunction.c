#include<stdio.h>
//Combination program- Cnr=n!/(n-r)*r!
int Factorial(int); //function prototype

int main(){
    int n,r;
    float cnr;
    printf("Enter the value of n and r:\n");
    scanf("%d %d",&n,&r);
    cnr = Factorial(n)/((float)Factorial(n-r)*Factorial(r));
    printf("Combination problem = %.2f",cnr);

}

int Factorial(int n){
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact *=i;
    }
    return fact;
}