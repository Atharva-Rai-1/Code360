#include <bits/stdc++.h> 

const int MOD = 1e9 + 7;

std::vector<std::vector<long long>> multiply(std::vector<std::vector<long long>>& A, std::vector<std::vector<long long>>& B) {
    std::vector<std::vector<long long>> C(2, std::vector<long long>(2, 0));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                C[i][j] = (C[i][j] + (A[i][k] * B[k][j]) % MOD) % MOD;
            }
        }
    }
    return C;
}

std::vector<std::vector<long long>> matrixPower(std::vector<std::vector<long long>> A, int p) {
    std::vector<std::vector<long long>> res = {{1, 0}, {0, 1}};
    while (p > 0) {
        if (p & 1) {
            res = multiply(res, A);
        }
        A = multiply(A, A);
        p >>= 1;
    }
    return res;
}

int fibonacciNumber(int n){
    if (n <= 2) return 1;
    std::vector<std::vector<long long>> T = {{1, 1}, {1, 0}};
    T = matrixPower(T, n - 2);
    return (T[0][0] + T[0][1]) % MOD;
}
