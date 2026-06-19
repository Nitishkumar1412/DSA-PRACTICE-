class Solution {
public:
    vector<int> optimalArray(vector<int> &arr) {
        int n = arr.size();

        vector<long long> ans(n);

        long long pref = 0;      // prefix sum up to current index
        long long totalPref = 0; // running prefix sum array value

        vector<long long> ps(n);

        for (int i = 0; i < n; i++) {
            totalPref += arr[i];
            ps[i] = totalPref;
        }

        for (int i = 0; i < n; i++) {
            int m = i / 2;

            long long leftCost =
                1LL * arr[m] * (m + 1) - ps[m];

            long long rightCost =
                (ps[i] - ps[m]) - 1LL * arr[m] * (i - m);

            ans[i] = leftCost + rightCost;
        }

        return vector<int>(ans.begin(), ans.end());
    }
};