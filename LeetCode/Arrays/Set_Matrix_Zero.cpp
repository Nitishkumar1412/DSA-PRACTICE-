class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> row, col;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto num: row){
            for(int i = 0; i<matrix[0].size(); i++){
                matrix[num][i] = 0;
            }
        }
        for(auto num: col){
            for(int i = 0; i<matrix.size(); i++){
                matrix[i][num] = 0;
            }
        }
    }
};