/*
Name:Sombe Jacinta
Reg no:CT100/G/26233/25
Description:a program to store daily sales transactions
*/

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening sales.txt\n");
        return 1;
    }

    // Read each transaction (one per line)
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);

    printf("Total sales for the day: %.2f\n", total);
    return 0;
}