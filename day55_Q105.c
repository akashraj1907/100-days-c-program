//Q105: Write a program to take an integer array nums of size n, and print the majority element.  
//The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists.
//Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>

int findMajorityElement(int nums[], int n) {
    if (n <= 0) return -1;

    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int actual_count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            actual_count++;
        }
    }

    if (actual_count > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input size.\n");
        return 0;
    }

    int nums[n];
    printf("Enter %d elements space-separated: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = findMajorityElement(nums, n);
    printf("Majority Element: %d\n", result);

    return 0;
}