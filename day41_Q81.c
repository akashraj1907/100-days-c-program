//Q81: Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

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

        while (str[count] != '\0') {
            count++;
        }

        printf("%d\n", count);
    }

    return 0;
}