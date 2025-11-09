/*
Name:Sombe Jacinta
Reg no:CT100/G/26233/25
Description:a progran that allows a librarian to record a library report
*/
#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    // Open file 
    file = fopen("borrowed_books.txt", "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter book title:\n");
    fgets(title, sizeof(title), stdin); 

    // Write title to file
    fprintf(file, "%s", title);

    fclose(file);
    printf("Book title stored successfully in borrowed_books.txt\n");

    return 0;
}