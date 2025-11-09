/*
Name:Sombe Jacinta
Reg no:CT100/G/26233/25
Description:a program records the students results
*/
#include <stdio.h>

struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student s;

    // Open the binary file for reading
    file = fopen("results.dat", "rb");

    if (file == NULL) {
        printf("Error opening results.dat\n");
        return 1;
    }

    printf("Student Results:\n");
    printf("----------------------------\n");

    // Read each record and display
    while (fread(&s, sizeof(struct Student), 1, file)) {
        printf("Name: %s\n", s.name);
        printf("Marks: %.2f\n", s.totalMarks);
        printf("----------------------------\n");
    }

    fclose(file);
    return 0;
}