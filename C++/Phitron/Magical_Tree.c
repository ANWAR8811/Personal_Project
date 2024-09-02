#include <stdio.h>

int main() {
    int n, r, c;

    scanf("%d", &n);
    int an = n;
    int a[40] = {0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23};
    n = a[n];

    for (r = 1; r <= n; r++) {

        for (c = 1; c <= n-r; c++) {
            printf(" ");
        } 
        
        for (c = 1; c <= 2*r-1; c++) {

        printf("*");
        }

        printf("\n");

    }

    // n = n - 5;
    for (r = 1; r <= 5; r++) {
        for (c = 1; c <= 5; c++) {
            printf(" ");
        }
        
        for (c = 1; c <= an; c++) {
            printf("*");
        }

        printf("\n");

    }

    
}
