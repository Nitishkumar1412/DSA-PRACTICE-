class Solution {
public:
    int minSwaps(vector<int>& arr) {
        int n = arr.size();
        
        // Count total number of 1s
        int ones = 0;
        for (int x : arr) {
            if (x == 1) ones++;
        }
        
        // If no 1s present
        if (ones == 0) return -1;
        
        // Count 0s in first window of size = ones
        int zeroCount = 0;
        for (int i = 0; i < ones; i++) {
            if (arr[i] == 0) zeroCount++;
        }
        
        int ans = zeroCount;
        
        // Sliding window
        for (int i = ones; i < n; i++) {
            if (arr[i - ones] == 0) zeroCount--;
            if (arr[i] == 0) zeroCount++;
            
            ans = min(ans, zeroCount);
        }
        
        return ans;
    }
};