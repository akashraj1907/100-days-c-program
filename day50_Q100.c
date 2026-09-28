//Q100: Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    if (scanf("%99s", str) == 1) {
        int len = strlen(str);
        int isFirst = 1;

        for (int i = 0; i < len; i++) {

            for (int j = i; j < len; j++) {
                if (!isFirst) {
                    printf(",");
                }
                isFirst = 0;

                for (int k = i; k <= j; k++) {
                    printf("%c", str[k]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}