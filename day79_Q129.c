//Q129: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *file;

    printf("Filename: ");
    if (scanf("%99s", filename) != 1) {
        printf("Error: Invalid input!\n");
        return 1;
    }

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: File does not exist!\n");
    } else {
        printf("File opened successfully.\n");
 
        char ch;
        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }

        fclose(file);
    }

    return 0;
}