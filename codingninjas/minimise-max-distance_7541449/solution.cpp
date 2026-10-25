bool isPossible(vector<int>& arr, int k, double mid) {
    int newStationsRequired = 0;
    for (int i = 0; i < arr.size() - 1; i++) {
        double currentDist = arr[i + 1] - arr[i];
        int stationsInBetween = currentDist / mid;
        if (currentDist / mid == stationsInBetween && stationsInBetween > 0) {
            stationsInBetween--;
        }
        newStationsRequired += stationsInBetween;
    }
    return newStationsRequired <= k;
}

double minimiseMaxDistance(vector<int> &arr, int k){
    int n = arr.size();
    double s = 0;
    double e = 0;
    for (int i = 0; i < n - 1; i++) {
        e = max(e, (double)(arr[i + 1] - arr[i]));
    }
    double ans = e;
    double diff = 1e-7; 
    while ((e - s) > diff) {
        double mid = s + (e - s) / 2.0;
        if (isPossible(arr, k, mid)) {
            ans = mid;
            e = mid;
        } else {
            s = mid;
        }
    }
    return ans;
}
