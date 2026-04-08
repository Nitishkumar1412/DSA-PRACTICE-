class Solution {
public:
    void backtrack(int start, vector<int>& arr, int target, 
                   vector<int>& curr, vector<vector<int>>& result) {
        
        if (target == 0) {
            result.push_back(curr);
            return;
        }

        for (int i = start; i < arr.size(); i++) {
            
            // Skip duplicates
            if (i > start && arr[i] == arr[i - 1]) continue;

            if (arr[i] > target) break;

            curr.push_back(arr[i]);
            backtrack(i + 1, arr, target - arr[i], curr, result);
            curr.pop_back();
        }
    }

    vector<vector<int>> uniqueCombinations(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> result;
        vector<int> curr;
        
        backtrack(0, arr, target, curr, result);
        return result;
    }
};