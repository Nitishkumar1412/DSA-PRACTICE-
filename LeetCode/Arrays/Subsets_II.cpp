class Solution {
public:
    void solve(int index, vector<int>& nums ,vector<int>& path , vector<vector<int>>& ans){
        ans.push_back(path);
   
        for(int i=index ;i<nums.size();i++){
        if(i> index && nums[i]==nums[i-1]) continue;
        path.push_back(nums[i]);
        solve(i+1, nums,path,ans);
        path.pop_back();
        }
       
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> path;
        vector<vector<int>> ans;
        solve(0,nums,path,ans);
        return ans;
    }
};