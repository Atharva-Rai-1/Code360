#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	if (n == 0) return 0;
    
    int mn, mx, i = 0;
    
    if (n % 2 != 0) {
        mn = mx = arr[0];
        i = 1;
    } else {
        if (arr[0] < arr[1]) {
            mn = arr[0];
            mx = arr[1];
        } else {
            mn = arr[1];
            mx = arr[0];
        }
        i = 2;
    }
    
    while (i < n - 1) {
        if (arr[i] < arr[i + 1]) {
            if (arr[i] < mn) mn = arr[i];
            if (arr[i + 1] > mx) mx = arr[i + 1];
        } else {
            if (arr[i + 1] < mn) mn = arr[i + 1];
            if (arr[i] > mx) mx = arr[i];
        }
        i += 2;
    }
    
    return mx + mn;
}
