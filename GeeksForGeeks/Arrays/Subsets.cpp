class Solution {
public:
    void solve(vector<int>& arr, vector<int>& curr, int pos, vector<vector<int>>& res) {
        if (pos == arr.size()) {
            res.push_back(curr);
            return;
        }
        solve(arr, curr, pos + 1, res);
        curr.push_back(arr[pos]);
        solve(arr, curr, pos + 1, res);
        curr.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& arr) {
        vector<int> start{};
        vector<vector<int>> res;
        solve(arr, start, 0, res);
        return res;
    }
};