#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
    int mn = INT_MAX;
    int mx = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        mn = std::min(mn, arr[i]);
        mx = std::max(mx, arr[i]);
    }
    
    return mx + mn;
}
