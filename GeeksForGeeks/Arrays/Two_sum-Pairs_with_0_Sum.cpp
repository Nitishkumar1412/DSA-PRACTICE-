class Solution {
public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;
        int l = 0, r = arr.size() - 1;

        while (l < r) {
            int sum = arr[l] + arr[r];

            if (sum == 0) {
                ans.push_back({arr[l], arr[r]});

                int left = arr[l];
                int right = arr[r];

                while (l < r && arr[l] == left) l++;
                while (l < r && arr[r] == right) r--;
            }
            else if (sum < 0) {
                l++;
            }
            else {
                r--;
            }
        }

        return ans;
    }
};