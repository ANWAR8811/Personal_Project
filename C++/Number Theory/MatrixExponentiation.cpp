// #include <iostream>
// #include <vector>

// using namespace std;

// const int MOD = 1000000007;

// vector<vector<int>> multiplyMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B, int size) {
//     vector<vector<int>> result(size, vector<int>(size, 0));

//     for (int i = 0; i < size; ++i) {
//         for (int j = 0; j < size; ++j) {
//             for (int k = 0; k < size; ++k) {
//                 result[i][j] += ((A[i][k] * B[k][j]) % MOD);
//                 result[i][j] %= MOD;
//             }
//         }
//     }

//     return result;
// }

// vector<vector<int>> matrixPower(const vector<vector<int>>& matrix, int power, int size) {
//     if (power == 1) return matrix;

//     vector<vector<int>> temp = matrixPower(matrix, power / 2, size);
//     temp = multiplyMatrices(temp, temp, size);

//     if (power % 2 == 1) {
//         temp = multiplyMatrices(temp, matrix, size);
//     }

//     return temp;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int size, power;
//         cin >> size >> power;

//         vector<vector<int>> matrix(size, vector<int>(size));

//         for (int i = 0; i < size; ++i) {
//             for (int j = 0; j < size; ++j) {
//                 cin >> matrix[i][j];
//             }
//         }

//         vector<vector<int>> result = matrixPower(matrix, power, size);

//         for (int i = 0; i < size; ++i) {
//             for (int j = 0; j < size; ++j) {
//                 cout << result[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }



#include <iostream>

using namespace std;

const int MAX_SIZE = 101;
long long matrix[MAX_SIZE][MAX_SIZE], identity[MAX_SIZE][MAX_SIZE];
long long mod = 1000000007;

void matrixMultiply(long long A[][MAX_SIZE], long long B[][MAX_SIZE], long long size) {
    long long result[MAX_SIZE][MAX_SIZE] = {0};

    for (long long i = 1; i <= size; ++i) {
        for (long long j = 1; j <= size; ++j) {
            for (long long k = 1; k <= size; ++k) {
                long long x = (A[i][k] * B[k][j]) % mod;
                result[i][j] = (result[i][j] + x) % mod;
            }
        }
    }

    for (long long i = 1; i <= size; ++i) {
        for (long long j = 1; j <= size; ++j) {
            A[i][j] = result[i][j];
        }
    }
}

void matrixPower(long long A[][MAX_SIZE], long long size, long long power) {
    for (long long i = 1; i <= size; ++i) {
        for (long long j = 1; j <= size; ++j) {
            identity[i][j] = (i == j) ? 1 : 0;
        }
    }

    while (power) {
        if (power % 2 == 1) {
            matrixMultiply(identity, A, size);
            power--;
        } else {
            matrixMultiply(A, A, size);
            power /= 2;
        }
    }

    for (long long i = 1; i <= size; ++i) {
        for (long long j = 1; j <= size; ++j) {
            A[i][j] = identity[i][j];
        }
    }
}

int main() {
    long long testCases;
    cin >> testCases;

    while (testCases--) {
        long long size, exponent, i, j;
        cin >> size >> exponent;

        for (i = 1; i <= size; ++i) {
            for (j = 1; j <= size; ++j) {
                cin >> matrix[i][j];
            }
        }
        matrixPower(matrix, size, exponent);

        for (i = 1; i <= size; ++i) {
            for (j = 1; j <= size; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}





// #include <iostream>

// using namespace std;

// const int N = 101;
// long long ar[N][N], I[N][N];
// long long mod = 1000000007;

// void mul(long long A[][N], long long B[][N], long long n) {
//     long long i, j, k;
//     long long R[n+1][n+1];

//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= n; j++) {
//             R[i][j] = 0;
//             for (k = 1; k <= n; k++) {
//                 long long x = (A[i][k] * B[k][j]) % mod;
//                 R[i][j] = (R[i][j] + x) % mod;
//             }
//         }
//     }

//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= n; j++) {
//             A[i][j] = R[i][j];
//         }
//     }
// }

// void power(long long A[][N], long long n, long long p) {
//     long long i, j;

//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= n; j++) {
//                 if (i == j) I[i][j] = 1;
//                 else I[i][j] = 0;
//             }
//     }

//     while (p) {
//         if (p % 2 == 1) {
//             mul(I, A, n);
//             p--;
//         }
//         else {
//             mul(A, A, n);
//             p /= 2;
//         }
//     }

//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= n; j++) {
//             A[i][j] = I[i][j];
//         }
//     }
// }


// int main() {
//     long long t;
//     cin >> t;

//     while (t--) {
//         long long n, p, i, j, k;
//         cin >> n >> p;

//         for (i = 1; i <= n; i++) {
//             for (j = 1; j <= n; j++) {
//                 cin >> ar[i][j];
//             }
//         }
//         power(ar, n, p);

//         for (i = 1; i <= n; i++) {
//             for (j = 1; j <= n; j++) {
//                 cout << ar[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// }