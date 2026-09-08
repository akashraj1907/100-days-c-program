//Q59: Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    int arr[n];
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Even=%d, Odd=%d\n", even_count, odd_count);
    
    return 0;
}