class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        vector<int> ans;
        if (mat.empty()) return ans;

        int srow = 0, scol = 0;
        int erow = mat.size() - 1;
        int ecol = mat[0].size() - 1;

        while (srow <= erow && scol <= ecol) {

            // Top row
            for (int j = scol; j <= ecol; j++)
                ans.push_back(mat[srow][j]);
            srow++;

            // Right column
            for (int i = srow; i <= erow; i++)
                ans.push_back(mat[i][ecol]);
            ecol--;

            // Bottom row
            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--)
                    ans.push_back(mat[erow][j]);
                erow--;
            }

            // Left column
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--)
                    ans.push_back(mat[i][scol]);
                scol++;
            }
        }
        return ans;
        
    }
};