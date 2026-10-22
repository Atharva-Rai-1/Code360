#include <bits/stdc++.h> 

bool isPossible(vector<int>& time, int m, int n, long long mid) { 
    int daysCount = 1; 
    long long dailyTimeSum = 0; 
    
    for(int i = 0; i < m; i++) { 
        if (time[i] > mid) {
            return false;
        }
        
        if (dailyTimeSum + time[i] <= mid) { 
            dailyTimeSum += time[i]; 
        } else { 
            daysCount++; 
            if (daysCount > n) { 
                return false; 
            } 
            dailyTimeSum = time[i]; 
        } 
    } 
    return true; 
} 

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
    long long s = 0;
    long long sum = 0; 
    for(int i = 0; i < m; i++) { 
        sum += time[i]; 
        if(time[i] > s) {
            s = time[i];
        }
    } 
    
    long long e = sum; 
    long long ans = -1; 
    
    while(s <= e) { 
        long long mid = s + (e - s) / 2; 
        if (isPossible(time, m, n, mid)) { 
            ans = mid; 
            e = mid - 1; 
        } else { 
            s = mid + 1; 
        } 
    } 
    return ans; 
}
