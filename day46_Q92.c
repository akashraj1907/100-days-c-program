//Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int found = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;
            

            if (freq[index] == 2) {
                printf("%c\n", str[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("No repeating character found\n");
    }

    return 0;
}