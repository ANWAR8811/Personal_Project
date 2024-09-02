#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    bool flag = true;

    for (int i = 0; i < n; i++) {
        if (a[i][i] != 1) {
            flag = false;
            break;
        }
    }


    for (int i = 0; i < n; i++) {
        if (a[i][n - i - 1] != 1) {
            flag = false;
            break;
        }
    }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i != j && j != n - i - 1 && a[i][j] != 0) {
                    flag = false;
                    break;
                }
            }
        }
    

    if (flag) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
