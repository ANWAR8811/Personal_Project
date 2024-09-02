#include <iostream>

using namespace std;

const int N = 5;
long long I[N][N], T[N][N];
long long mod = 1000000007;

void mul(long long A[][N], long long B[][N], long long dim) {
    long long res[dim + 1][dim + 1];

    for (long long i = 0; i < dim; i++) {
        for (long long j = 0; j < dim; j++) {
            res[i][j] = 0;
            for (long long k = 0; k < dim; k++) {
                long long x = (A[i][k] * B[k][j]) % mod;
                res[i][j] = (res[i][j] + x) % mod;
            }
        }
    }

    // Update matrix A with the result res
    for (long long i = 0; i < dim; i++) {
        for (long long j = 0; j < dim; j++) {
            A[i][j] = res[i][j];
        }
    }
}


void solve(long long a, long long b, long long n) {
    I[0][0] = I[1][1] = 1;
    I[0][1] = I[1][0] = 0;

    T[0][0] = 0;
    T[0][1] = T[1][0] = T[1][1] = 1;
    n--;

    while (n) {
        if (n % 2 == 1) {
            mul(I, T, 2);
            n--;
        }
        else {
            mul(T, T, 2);
            n /= 2;
        }
    }

    long long ans = a * I[0][1] + b * I[1][1];
    cout << ans % mod << endl;
}



int main() {
    long long tc;
    cin >> tc;

    while (tc--) {
        long long a, b, n;
        cin >> a >> b >> n;

        solve(a, b, n);
    }
}