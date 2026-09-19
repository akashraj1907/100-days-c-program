//Q82: Print each character of a string on a new line.
#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");

    if (fgets(str, sizeof(str), stdin) != NULL) {

        int i = 0;
        while (str[i] != '\0') {
            if (str[i] == '\n') {
                str[i] = '\0';
                break;
            }
            i++;
        }

        i = 0;
        while (str[i] != '\0') {
            printf("%c\n", str[i]);
            i++;
        }
    }

    return 0;
}