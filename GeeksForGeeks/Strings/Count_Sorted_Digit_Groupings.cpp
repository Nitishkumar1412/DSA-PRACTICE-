class Solution {
  public:
    
    int dp[105][905];

    int solve(int i, int prev, string &s) {
        if (i == s.size()) return 1;

        if (dp[i][prev] != -1)
            return dp[i][prev];

        int sum = 0, ans = 0;

        for (int j = i; j < s.size(); j++) {
            sum += s[j] - '0';

            if (sum >= prev)
                ans += solve(j + 1, sum, s);
        }

        return dp[i][prev] = ans;
    }

    int validGroups(string &s) {
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, s);
    }
};