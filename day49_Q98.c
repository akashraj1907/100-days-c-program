//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter a full name: ");
    if (fgets(name, sizeof(name), stdin) != NULL) {

        name[strcspn(name, "\n")] = '\0';

        int len = strlen(name);
        int last_space = -1;

        for (int i = 0; i < len; i++) {
            if (name[i] == ' ' || name[i] == '\t') {
                last_space = i;
            }
        }

        if (last_space == -1) {
            printf("%s\n", name);
            return 0;
        }

        int i = 0;

        while (i < last_space && (name[i] == ' ' || name[i] == '\t')) {
            i++;
        }

        if (i < last_space && isalpha(name[i])) {
            printf("%c.", toupper(name[i]));
        }

        for (; i < last_space; i++) {
            if ((name[i] == ' ' || name[i] == '\t') && isalpha(name[i + 1])) {
                printf("%c.", toupper(name[i + 1]));
            }
        }

        while (name[last_space] == ' ' || name[last_space] == '\t') {
            last_space++;
        }

        printf(" %s\n", &name[last_space]);
    }

    return 0;
}