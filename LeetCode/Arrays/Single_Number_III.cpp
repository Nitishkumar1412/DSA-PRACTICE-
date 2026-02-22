class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> result;
        int n = nums.size();

        for (int i = 0; i < n - 1; i += 2) {
            if (nums[i] != nums[i + 1]) {
                result.push_back(nums[i]);
                i--;  // adjust because we skipped wrongly
            }
        }

        if (result.size() < 2) {
            result.push_back(nums[n - 1]);
        }

        return result;
    }
};