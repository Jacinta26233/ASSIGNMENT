/*
Name:Sombe Jacinta Nduku
Reg.no:CT100/G/26233/25
Description:A program to calculate fare
*/
#include <stdio.h>
float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}