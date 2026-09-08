//Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    int arr[n];
    int positive = 0, negative = 0, zero = 0;
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    
    return 0;
}