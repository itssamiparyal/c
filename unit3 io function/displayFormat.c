#include <stdio.h>

int main(){
    int a = 28;
    float x = 11.123456;
    printf("%-6d \n",a); // creating 4 whitespace after a number
    printf("%+d \n",a); //insert + before number(making positive)
    printf("%09d \n",a); // remaining width contains 0
    printf("%d \n",a); //whitespace
    printf("%#o \n",a); //octal--# gives actual formatting of octal number
    printf("%#0x \n",a); //hexadecmial --# gives actual formatting of hex number
    printf("%7.2f \n",x); // percision formation %w.pf
    return 0;
}