#include<stdio.h>
int main(){
    int fact = 1, i , n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    //loop
    printf("fact = ");
    for (i = n; i >= 1; i--){
        fact = fact * i;
        if(i == 1){
           printf("%d ",i); 
        }
        else{
            printf("%d * ",i);
        }
           
    }
    printf(" = %d",fact);
    return 0;
}