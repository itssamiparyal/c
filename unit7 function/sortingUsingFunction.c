#include<stdio.h>

void sorting(int a[],int n){
    printf("Before sorting:\n");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    //sorting process
    for(int i = 0; i < n-1; i++){
        for(int j = i+1;j<n;j++){
            int temp;
            if(a[i] > a[j]){
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    printf("\nAfter sorting:\n");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int a[10],n;
    printf("enter the size of an array:\n");
    scanf("%d",&n);
    printf("enter the elements in array:\n");
    for(int i = 0;i  < n;i++){
        printf("Enter a[%d]",i+1);
        scanf("%d",&a[i]);
    }
    sorting(a,n);
    return 0;
}