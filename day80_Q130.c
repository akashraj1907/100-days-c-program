//Q130: Write a program that reads text from info.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    int ch;

    inFile = fopen("info.txt", "r");
    if (inFile == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        perror("Error opening output.txt");
        fclose(inFile);
        return 1;
    }

    printf("--- Reading from input.txt ---\n");

    while ((ch = fgetc(inFile)) != EOF) {

        putchar(ch);

        fputc(toupper(ch), outFile);
    }

    printf("\n\n--- Conversion Complete ---\n");
    printf("Result successfully written to output.txt\n");

    fclose(inFile);
    fclose(outFile);

    return 0;
}