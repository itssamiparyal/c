// Program to display number of days in a month using switch statement.

#include <stdio.h>

int main() {
    int month;
    int year;  // for leap year check in February

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n");
            break;
        case 2:
            printf("Enter year: ");
            scanf("%d", &year);
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("29 days (Leap year)\n");
            } else {
                printf("28 days\n");
            }
            break;
        default:
            printf("Invalid month number!\n");
    }

    return 0;
}
