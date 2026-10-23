class Solution {
    bool isPossible(vector<int>& arr, int k, int mid) { 
        int cowCount = 1; 
        int lastpos = arr[0]; 

        for(int i = 1; i < arr.size(); i++) { 
            if (arr[i] - lastpos >= mid) { 
                cowCount++; 
                lastpos = arr[i]; 

                if (cowCount >= k) { 
                    return true; 
                } 
            } 
        } 
        return false; 
    } 

  public:
    int aggressiveCows(vector<int> &arr, int k) {
        sort(arr.begin(), arr.end());

        int s = 0; 
        int e = arr[arr.size() - 1] - arr[0]; 

        int ans = -1;
        int mid = s + (e - s) / 2;

        while(s <= e) { 
            if (isPossible(arr, k, mid)) { 
                ans = mid;     
                s = mid + 1;   
            } else { 
                e = mid - 1;   
            } 
            mid = s + (e - s) / 2; 
        } 
        return ans;
    }
};