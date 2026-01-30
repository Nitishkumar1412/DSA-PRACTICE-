class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        set<int> row, col;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(int nums: row){
            for(int i=0; i<mat[0].size(); i++){
                mat[nums][i] = 0; 
            }
        }
        for(int nums: col){
            for(int i=0; i<mat.size(); i++){
                mat[i][nums] = 0;
            }
        }
    }
};