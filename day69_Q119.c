//Q119: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs.  Print the two indices separated by a space as output. 
//The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target.
//Assume exactly one solution exists and return the indices in any order.
//If no solution exists, print "-1 -1".
#include <stdio.h>
int main() {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 0;
    
    int nums[n];

    printf("Enter %d positive integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int target;

    printf("Enter the target value: ");
    scanf("%d", &target);
    
    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Output indices: %d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        printf("-1 -1\n");
    }
    
    return 0;
}