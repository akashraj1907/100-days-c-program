//Q131: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file;
    char filename[] = "info.txt";
    char ch;
    int vowels = 0, consonants = 0;

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    printf("File Content: ");
    
    while ((ch = fgetc(file)) != EOF) {

        putchar(ch); 

        char lower_ch = tolower(ch);

        if (isalpha(lower_ch)) {
            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("\n\n");

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}