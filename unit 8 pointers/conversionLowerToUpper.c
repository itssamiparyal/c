#include<stdio.h>

void letterConversion(char *ptr){
    if(*ptr>=97 && *ptr<=122){
        *ptr = *ptr - 32;
    }
}

int main(){
    char ch;
    printf("Enter any chracter:\n");
    scanf(" %c",&ch);
    letterConversion(&ch);
    printf("Upper case letter is = %c",ch);
    return 0;
}