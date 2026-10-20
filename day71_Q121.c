//Q121: Write a program to take an input array of size n,
//The array should contain all the integers between 0 to n except for one,
//Print that missing number.
#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[n];
    int array_sum = 0;

    printf("Enter %d integers (from 0 to %d with one missing): \n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        array_sum += arr[i];
    }

    int expected_sum = (n * (n + 1)) / 2;
    
    int missing_number = expected_sum - array_sum;

    printf("The missing number is: %d\n", missing_number);
    
    return 0;
}