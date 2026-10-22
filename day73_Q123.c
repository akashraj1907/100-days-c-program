//Q123: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
 
    printf("Enter the string: ");

    if (fgets(str, sizeof(str), stdin) != NULL) {

        str[strcspn(str, "\n")] = '\0';
        
        int capitalize_next = 1; 
        
        for (int i = 0; str[i] != '\0'; i++) {
            if (isspace((unsigned char)str[i])) {
                capitalize_next = 1;
            } else if (capitalize_next) {
                str[i] = toupper((unsigned char)str[i]);
                capitalize_next = 0;
            }
        }
        
        printf("Output: %s\n", str);
    }
    
    return 0;
}