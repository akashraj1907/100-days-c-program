//Q86: Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char str[100];

    printf("Enter a string: ");

    if (scanf("%99s", str) == 1) {
        if (isPalindrome(str)) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }
    
    return 0;
}