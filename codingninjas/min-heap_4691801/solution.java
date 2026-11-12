import java.util.*;
import java.io.*;

public class Solution {
    static int[] minHeap(int n, int[][] q) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        List<Integer> result = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            if (q[i][0] == 0) {
                pq.offer(q[i][1]);
            } else {
                if (!pq.isEmpty()) {
                    result.add(pq.poll());
                }
            }
        }

        int[] ans = new int[result.size()];
        for (int i = 0; i < result.size(); i++) {
            ans[i] = result.get(i);
        }

        return ans;
    }
}
