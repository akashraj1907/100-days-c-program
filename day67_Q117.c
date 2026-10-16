//Q117: Write a program to take a string s as input. 
//The task is to find the length of the longest substring without repeating characters.
//Print the length as output.
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;
    
    int lastSeen[256];
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }
    
    for (int end = 0; end < n; end++) {
        unsigned char currentChar = s[end];
        
        if (lastSeen[currentChar] >= start) {
            start = lastSeen[currentChar] + 1;
        }
        
        lastSeen[currentChar] = end;
        
        int currentLength = end - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    
    return maxLength;
}

int main() {
    char s[1005];
    
    printf("Enter string s: ");
    if (scanf("%s", s) == 1) {
        int result = lengthOfLongestSubstring(s);
        printf("Output: %d\n", result);
    }
    
    return 0;
}