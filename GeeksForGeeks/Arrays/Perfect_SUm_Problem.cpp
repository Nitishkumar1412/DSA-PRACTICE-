class Solution {
public:
    int perfectSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> dp(target + 1, 0);

        dp[0] = 1; 

        for (int num : arr) {
            // traverse backwards to avoid overwriting
            for (int j = target; j >= num; j--) {
                dp[j] += dp[j - num];
            }
        }

        return dp[target];
    }
};