// Program to calculate discount. If purchased amount is greater than or equal to 1000, discount is 5%.

#include <stdio.h>

int main() {
    float amount, discount = 0, final_amount;

    printf("Enter purchased amount: ");
    scanf("%f", &amount);

    if (amount >= 1000) {
        discount = amount * 5 / 100;   // 5% discount
    }

    final_amount = amount - discount;

    printf("Discount = %.2f\n", discount);
    printf("Amount to be paid = %.2f\n", final_amount);

    return 0;
}
