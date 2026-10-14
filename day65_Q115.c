//Q112: Write a program to take an integer array arr as input.  
//The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output.
//If all elements are negative, print the largest (least negative) element.
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for array size.\n");
        return 0;
    }
    
    int arr[n];

    printf("Enter %d elements separated by space: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  
    long long max_so_far = arr[0];
    long long curr_max = arr[0];

    for (int i = 1; i < n; i++) {

        curr_max = (arr[i] > curr_max + arr[i]) ? arr[i] : (curr_max + arr[i]);

        if (curr_max > max_so_far) {
            max_so_far = curr_max;
        }
    }

    printf("The maximum contiguous subarray sum is: %lld\n", max_so_far);
    
    return 0;
}