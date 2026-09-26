//Q95: Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        return 0;
    }

    char temp[2 * len1 + 1];

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL) {
        return 1;
    }

    return 0;
}

int main() {
    char s1[100], s2[100];

    printf("Enter string 1: ");
    if (scanf("%s", s1) != 1) return 0;

    printf("Enter string 2: ");
    if (scanf("%s", s2) != 1) return 0;

    if (isRotation(s1, s2)) {
        printf("Output: Rotation\n");
    } else {
        printf("Output: Not rotation\n");
    }

    return 0;
}