// Program to express a length given in millimeters in meters, centimeters, and millimeters.

#include <stdio.h>

int main() {
    int total_mm;
    int meters, centimeters, millimeters;

    printf("Enter length in millimeters:\n");
    scanf("%d", &total_mm);

    meters = total_mm / 1000;               // 1 meter = 1000 mm
    centimeters = (total_mm % 1000) / 10;   // 1 cm = 10 mm
    millimeters = total_mm % 10;            // remaining mm

    printf("Length = %d meter(s), %d centimeter(s), %d millimeter(s)\n", meters, centimeters, millimeters);

    return 0;
}
