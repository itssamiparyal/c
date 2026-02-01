#include<stdio.h>

int main(){
    int a = 0, b = 1, c;
    int terms;
    printf("Enter the number of terms upto:\n");
    scanf("%d",&terms);
    printf("%d %d ",a,b);
    for(int i = 3; i <= terms; i++){
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
}