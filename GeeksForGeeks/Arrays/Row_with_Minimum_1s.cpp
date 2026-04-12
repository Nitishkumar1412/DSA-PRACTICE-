class Solution {
public:
    int minRow(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int minCount = m + 1;
        int rowIndex = 0;
        
        for (int i = 0; i < n; i++) {
            int count = 0;
            
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    count++;
                }
            }
            
            if (count < minCount) {
                minCount = count;
                rowIndex = i;
            }
        }
        
        return rowIndex + 1;
    }
};