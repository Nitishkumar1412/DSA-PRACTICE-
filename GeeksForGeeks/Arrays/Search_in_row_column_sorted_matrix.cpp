//Using Staircase Method for better time complexity

class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int n = mat.size(); // No. of rows
        int m = mat[0].size(); // No. Columns
        
        // Taking Bottom left as cell
        int i = n-1;
        int j = 0;
        
        
        while(i>=0 && j<m){
            if(mat[i][j]==x)    return true;
            else if(mat[i][j]>x)    i--; 
            else if(mat[i][j]<x)    j++; 
        }
        return false;
        
    }
};