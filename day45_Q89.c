//Q89: Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character to count: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c': %d\n", ch, count);

    return 0;
}