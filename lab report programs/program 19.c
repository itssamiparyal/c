// 19. Program to calculate the simple interest.
// a) If balance is greater than 99999, interest is 7 %.
// b) If balance is greater than or equal to 50000 and less than 100000interest is 5 %.
// c) If balance is less than 50000, interest is 3%.

#include <stdio.h>

int main() {
    float balance, interest, simple_interest;
    int time = 1; // assuming time = 1 year for simple interest calculation

    printf("Enter account balance: ");
    scanf("%f", &balance);

    // Determine interest rate based on balance
    if (balance > 99999) {
        interest = 7;   // 7%
    } else if (balance >= 50000) {
        interest = 5;   // 5%
    } else {
        interest = 3;   // 3%
    }

    simple_interest = (balance * interest * time) / 100;

    printf("Interest Rate = %.2f%%\n", interest);
    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}
