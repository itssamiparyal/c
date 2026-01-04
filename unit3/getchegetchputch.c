#include <stdio.h>

int main(){
    char ch;
    printf("enter any character:\n");
    ch = getchar(); // take single character as input from keyboard similar to scanf("%c",&ch)
    printf("The entered character is:\n");
    putchar(ch); // character paramater only
    return 0;
} // get char needs to enter after entering the key