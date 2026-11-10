import java.util.*; 

public class Solution { 
    public static long solve(int n, int[] a) { 
        long sum = 0;
        for (int i = 0; i < n; i++) { 
            sum += a[i]; 
        } 
        return sum; 
    } 
}
