#include <stdio.h>

int main(){
    int day, month , year;
    printf("Enter dob in (yyyy-mm-dd) format:\n");
    scanf("%d-%d-%d", &year, &month, &day); // format is  2000-12-24
    printf("my dob is %d month / %d day / %d year \n",month,day,year);
    return 0;
}
