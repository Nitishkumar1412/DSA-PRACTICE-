class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> ans(matrix);
        int mx = INT_MIN;
        for(int col = 0; col < ans[0].size(); ++ col)
        {
            mx = INT_MIN;
            for(int row = 0; row < ans.size(); ++row)
                mx = max(mx, ans[row][col]);

            for(int row = 0; row < ans.size(); ++row)
                if(ans[row][col] == -1)
                    ans[row][col] = mx;
        }
        return ans;
    }
};