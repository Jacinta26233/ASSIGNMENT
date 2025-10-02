/*
Name:Sombe Jacinta Nduku
Reg:CT100/G/26233/25
Description:A program to check water_bills
*/
#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    // Prompt user
    printf("Enter water units consumed:\n ");
    scanf("%d", &units);

    // Calculate bill using if-else if-else
    if (units <= 30) {
        bill = units * 20;
    } 
    else if (units <= 60) {
        bill = (30 * 20) + (units - 30) * 25;
    } 
    else {
        bill = (30 * 20) + (30 * 25) + (units - 60) * 30;
    }

    // Display result
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}