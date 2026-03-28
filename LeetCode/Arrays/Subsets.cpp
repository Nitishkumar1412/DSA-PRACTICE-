class Solution {
public:
    void solve(vector<int>& nums, vector<int>& curr, int pos, vector<vector<int>>& res) {
        if (pos == nums.size()) {
            res.push_back(curr);
            return;
        }
        solve(nums, curr, pos + 1, res);
        curr.push_back(nums[pos]);
        solve(nums, curr, pos + 1, res);
        curr.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> start{};
        vector<vector<int>> res;
        solve(nums, start, 0, res);
        return res;
    }
};