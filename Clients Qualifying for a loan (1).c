/*
Name: Sombe Jacinta Nduku
Reg:CT100/G/26233/25
Description:C program to compute whether a client qualifies for a loan
*/

#include<stdio.h>

int main () {
    float annual_income;
    int age;

    printf("Enter your age:");
    scanf("%d", &age);

    printf ("Enter your annual _income:");
    scanf("%f", &annual_income);

    if( age >= 21 & annual_income >= 21000)
        printf("Congratulations you qualify for the loan /n");
    else
        printf("Unfortunately, we are unable to offer you a loan at this limit /n");

    return 0;
}