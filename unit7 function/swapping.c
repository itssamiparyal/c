#include<stdio.h>

void swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping:(%d,%d)\n",a,b);
}

int main(){
    int x,y;
    printf("Enter the values of x and y:\n");
    scanf("%d %d",&x,&y);
    printf("Before swapping:(%d,%d)\n",x,y);
    swap(x,y);
}