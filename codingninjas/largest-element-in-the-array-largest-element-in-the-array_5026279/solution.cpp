#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int largestElement=INT_MIN;
    for (int i=1; i<n; i++){
        largestElement=max(arr[i],largestElement);
    }
    return largestElement;
}
