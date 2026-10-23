class Solution {
    bool isPossible(vector<int>& arr,int k, int mid) { 
        int studentCount = 1; 
        int pageSum = 0; 

        for(int i = 0; i < arr.size(); i++) { 
            if (arr[i] > mid) {
                return false;
            }

            if (pageSum + arr[i] <= mid) { 
                pageSum += arr[i]; 
            } else { 
                studentCount++; 
                if (studentCount > k) { 
                    return false; 
                } 
                pageSum = arr[i]; 
            } 
        } 
        return true; 
    }
  public:
    int minTime(vector<int>& arr, int k) {
        if (k > arr.size()) return -1; 

           int s = 0; 
           int sum = 0; 
           for(int i = 0; i < arr.size(); i++) { 
               sum += arr[i]; 
           } 

           int e = sum; 
           int ans = -1; 
           int mid = s + (e - s) / 2; 

           while(s <= e) { 
               if (isPossible(arr, k, mid)) { 
                   ans = mid; 
                   e = mid - 1; 
               } else { 
                   s = mid + 1; 
               } 
               mid = s + (e - s) / 2; 
           } 
           return ans;
    }
};