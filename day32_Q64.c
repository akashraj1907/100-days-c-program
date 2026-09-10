//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);
    
    int count[10] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            count[s[i] - '0']++;
        }
    }
    
    int max_count = 0, ans = 0;
    for (int i = 0; i <= 9; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            ans = i;
        }
    }
    
    printf("%d\n", ans);
    return 0;
}