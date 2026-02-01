#include <stdio.h>

int main() {
    long int decnum, rev = 0, rem, i = 1;

    printf("\nEnter decimal number:\t");
    scanf("%ld", &decnum);

    while (decnum != 0) {
        rem = decnum % 2;
        rev = rev + rem * i;
        decnum = decnum / 2;
        i = i * 10;
    }

    printf("\nThe corresponding binary number is %ld", rev);
    return 0;
}
