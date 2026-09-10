//Q63: Merge two arrays.
#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int a[n1];
    for(int i = 0; i < n1; i++) scanf("%d", &a[i]);
    
    scanf("%d", &n2);
    int b[n2];
    for(int i = 0; i < n2; i++) scanf("%d", &b[i]);
    
    for(int i = 0; i < n1; i++) printf("%d ", a[i]);
    for(int i = 0; i < n2; i++) printf("%d%s", b[i], (i == n2 - 1) ? "" : " ");
    
    return 0;
}