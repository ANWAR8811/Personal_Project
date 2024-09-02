#include <stdio.h>

int main() {
    int a[6] = {6, 5, 4, 3, 2, 1};
    int length = sizeof(a) / sizeof(a[0]);  // Calculate the length of the array

    for (int i = 0; i < length; i++) {
        printf("%d ", a[i]);  // Use %d to print integer values
    }

    return 0;
}
