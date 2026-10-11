//Q109: Write a program to take an integer array arr and an integer k as inputs. 
//Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the subarray size (k): ");
    scanf("%d", &k);
 
    if (n < k || k <= 0) {
        printf("Invalid input: k cannot be greater than n or less than 1.\n");
        printf("0\n");
        return 0;
    }
    
    long long windowSum = 0;

    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    
    long long maxSum = windowSum;
 
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("Maximum sum of subarray of size %d is: %lld\n", k, maxSum);
    
    return 0;
}
