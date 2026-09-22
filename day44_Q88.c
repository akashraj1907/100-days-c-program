//Q88: Replace spaces with hyphens in a string.
#include <stdio.h>

int main() {
    char str[500];
    int i = 0;

    printf("Enter a string: ");

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }
    str[i] = '\0';

    printf("%s\n", str);

    return 0;
}