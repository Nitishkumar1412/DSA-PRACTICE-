class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        for(int i=0; i<n; i++){
            sum = sum + mat[i][i]; // Given i = j // For Primary Diagonal

            if(i!= n-i-1){
                sum = sum + mat[i][n-i-1];
            }
        
        }
        return sum;
        
    }
};