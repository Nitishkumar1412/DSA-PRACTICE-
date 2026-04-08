class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(vector<int>& candidates, int target, int idx, vector<int>& curr){
        if(target == 0){
            ans.push_back(curr);
            return;
        }

        if(target < 0)  return;

        for(int i=idx;i<candidates.size();i++){
            curr.push_back(candidates[i]);

            backtrack(candidates, target - candidates[i], i, curr);
            curr.pop_back();
        }

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;

        backtrack(candidates, target, 0, curr);
        return ans;
    }
};
