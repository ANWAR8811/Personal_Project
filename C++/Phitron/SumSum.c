#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int N;
    scanf("%d", &N);
    int V[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    int pSum = 0;
    int nSum = 0;

    for (int i = 0; i < N; i++) {
        if (V[i] > 0) {
            pSum = pSum + V[i];
        }
        else {
            nSum = nSum + V[i];
        }
    }

    printf("%d %d", pSum, nSum);

    return 0;
}