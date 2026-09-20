//Q84: Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s\n", str);

    return 0;
}