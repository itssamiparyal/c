// asci max value is 256 if value goes higher than it then it will subtract 256 for example
// 32+260
// = 292 as 256 is max we subtract 256
// 292 - 256
// 36

#include <stdio.h>
int main(){
    unsigned char a = 'A';
    a = a + 255;
    printf("\n%c %d",a,a);
    return 0;
}