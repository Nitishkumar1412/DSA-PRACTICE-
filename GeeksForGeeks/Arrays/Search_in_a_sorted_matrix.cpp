class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int m = mat.size(); // No. of Rows
        int n = mat[0].size(); // No. of Columns;

        // Taking Top Right Cell.
        int i = 0;
        int j = n-1;  

        while(i<m && j>=0){ // Downward Traverse
            if(mat[i][j]==x)    return true;
            else if(mat[i][j]>x)    j--; // Column - 1
            else if(mat[i][j]<x)    i++; // Row + 1

        }
        return false;
        
    }
};