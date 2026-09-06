//Q56: Read and print elements of a one-dimensional array.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements(n): ");
    
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    return 0;
}