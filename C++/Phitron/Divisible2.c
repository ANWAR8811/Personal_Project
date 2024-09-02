#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    scanf("%d", &N);

    for (int i = 1; i < N+1; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            printf("%d\n", i);
        }
    }
    // for (int i = 1; i < N+1; i++) {
    //     if (i % 21 == 0) {
    //         printf("%d\n", i);
    //     }
    // }
    return 0;
}