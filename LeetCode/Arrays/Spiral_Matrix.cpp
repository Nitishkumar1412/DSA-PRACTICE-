class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty()) return ans;

        int srow = 0, scol = 0;
        int erow = matrix.size() - 1;
        int ecol = matrix[0].size() - 1;

        while (srow <= erow && scol <= ecol) {

            // Top row
            for (int j = scol; j <= ecol; j++)
                ans.push_back(matrix[srow][j]);
            srow++;

            // Right column
            for (int i = srow; i <= erow; i++)
                ans.push_back(matrix[i][ecol]);
            ecol--;

            // Bottom row
            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--)
                    ans.push_back(matrix[erow][j]);
                erow--;
            }

            // Left column
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--)
                    ans.push_back(matrix[i][scol]);
                scol++;
            }
        }
        return ans;
    }
};