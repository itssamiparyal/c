#include<stdio.h>

int main(){
    //compiler understand a[] == a[7]
    int a[] = {5,3,4,7,8,6,9};
    printf("Before sorting:\n");
    for(int i = 0; i < 7; i++){
        printf("%d",a[i]);
    }
    //sorting process
    for(int i = 0; i < 6; i++){
        for(int j = i+1;j<7;j++){
            int temp;
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter sorting:\n");
    for(int i = 0; i < 7; i++){
        printf("%d",a[i]);
    }
    return 0;
}