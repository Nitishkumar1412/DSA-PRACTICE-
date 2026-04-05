class Solution {
public:
    int totalWays(vector<int>& arr, int target) {
        int sum = 0;
        for (int x : arr) sum += x;

        // Edge cases
        if ((sum + target) % 2 != 0 || sum < abs(target)) return 0;

        int P = (sum + target) / 2;

        vector<int> dp(P + 1, 0);
        dp[0] = 1;

        for (int num : arr) {
            for (int j = P; j >= num; j--) {
                dp[j] += dp[j - num];
            }
        }

        return dp[P];
    }
};