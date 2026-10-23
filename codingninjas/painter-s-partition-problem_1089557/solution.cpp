bool isPossible(vector<int> &boards, int k, int mid) { 
    int painterCount = 1; 
    int timeSum = 0; 
    
    for(int i = 0; i < boards.size(); i++) { 
        if (boards[i] > mid) {
            return false;
        }
        
        if (timeSum + boards[i] <= mid) { 
            timeSum += boards[i]; 
        } else { 
            painterCount++; 
            if (painterCount > k) { 
                return false; 
            } 
            timeSum = boards[i]; 
        } 
    } 
    return true; 
} 

int findLargestMinDistance(vector<int> &boards, int k)
{
    if (k > boards.size()) return -1; 
    
    int s = 0; 
    int sum = 0; 
    for(int i = 0; i < boards.size(); i++) { 
        sum += boards[i]; 
    } 
    
    int e = sum; 
    int ans = -1; 
    int mid = s + (e - s) / 2; 
    
    while(s <= e) { 
        if (isPossible(boards, k, mid)) { 
            ans = mid; 
            e = mid - 1; 
        } else { 
            s = mid + 1; 
        } 
        mid = s + (e - s) / 2; 
    } 
    return ans; 
    
}
