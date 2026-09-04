//Q52: Write a program to print the following pattern:
//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*
#include <stdio.h>

int main() {
    int line_counts[] = {1, 3, 5, 3, 1};
    int total_groups = sizeof(line_counts) / sizeof(line_counts[0]);

    for (int i = 0; i < total_groups; i++) {

        for (int j = 0; j < line_counts[i]; j++) {
            printf("*\n");
        }
        
        if (i < total_groups - 1) {
            printf("\n");
        }
    }

    return 0;
}