// Using Staircase Method for better time complexity.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size(); // No. of Rows
        int n = matrix[0].size(); // No. of Columns;

        // Taking Top Right Cell.
        int i = 0;
        int j = n-1;  

        while(i<m && j>=0){ // Downward Traverse
            if(matrix[i][j]==target)    return true;
            else if(matrix[i][j]>target)    j--; // Column - 1
            else if(matrix[i][j]<target)    i++; // Row + 1

        }
        return false;
    }
};