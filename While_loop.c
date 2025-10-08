/*
Name:Sombe Jacinta Nduku
Reg.no:CT100/G/26233/25
While loop in C
Description:A program to check when the user to withdraw
*/
#include <stdio.h>

int main() {
    float balance, amount;

    // Ask the user to enter the initial account balance
    printf("Enter your account balance: ");
    scanf("%f", &balance);

    // Continue withdrawals while balance is greater than 0
    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &amount);

        // Deduct withdrawal from balance
        balance -= amount;

        // Display updated balance
        printf("Remaining balance: %.2f\n", balance);

        // Check if balance is zero or negative
        if (balance <= 0) {
            printf("Insufficient funds. Transaction stopped.\n");
        }
    }

    return 0;
}