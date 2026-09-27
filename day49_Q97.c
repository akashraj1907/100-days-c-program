//Q97: Print the initials of a name.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter a full name: ");

    if (fgets(name, sizeof(name), stdin) != NULL) {
        int i = 0;

        printf("Initials: ");

        while (name[i] == ' ' || name[i] == '\t') {
            i++;
        }

        if (isalpha(name[i])) {
            printf("%c.", toupper(name[i]));
        }

        for (; name[i] != '\0'; i++) {
            if ((name[i] == ' ' || name[i] == '\t') && isalpha(name[i + 1])) {
                printf("%c.", toupper(name[i + 1]));
            }
        }
        printf("\n");
    }

    return 0;
}