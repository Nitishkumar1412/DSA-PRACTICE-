// User function Template for C++

class Solution {
  public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        int sum = 0;
        int n = matrix.size();
        
        for(int i=0; i<n; i++){
            sum = sum + matrix[i][i];
            sum = sum + matrix[i][n-i-1] ; // Add Centre Element in case of odd size matrix.
        }
        return sum;
        
    }
};