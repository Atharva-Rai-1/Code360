#include <vector>
#include <algorithm>

using namespace std;

vector<int> rotateArray(vector<int> arr, int k) {
    int n = arr.size();
    if (n <= 1) return arr;
    
    k = k % n;
    if (k == 0) return arr;
    
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
    
    return arr;
}
