#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
	long long int MOD = 1000000007;
    
    if (q == 1) {
        return (n * (n + 1)) / 2;
    } 
    else if (q == 2) {
        long long int product = 1;
        for (int i = 1; i <= n; i++) {
            product = (product * i) % MOD;
        }
        return product;
    }
    
    return 0;
}
