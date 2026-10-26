//Q127: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    char filename[100];

    printf("Enter the filename: ");
    if (scanf("%99s", filename) != 1) {
        printf("Error reading filename.\n");
        return 1;
    }

    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    char ch;
    long char_count = 0;
    long word_count = 0;
    long line_count = 0;
    
    bool in_word = false;
    bool has_content = false;

    while ((ch = fgetc(file)) != EOF) {
        char_count++;
        has_content = true;

        if (ch == '\n') {
            line_count++;
        }

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r') {
            in_word = false;
        } else if (!in_word) {
            in_word = true;
            word_count++;
        }
    }

    if (has_content) {
        line_count++; 
    }

    fclose(file);

    printf("\n--- File Statistics ---\n");
    printf("Characters: %ld\n", char_count);
    printf("Words: %ld\n", word_count);
    printf("Lines: %ld\n", line_count);

    return 0;
}