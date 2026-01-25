class Solution {
public:
    vector<int> getTable(int n) {
        vector<int> result;
        
        for(int i = 1; i <= 10; i++) {
            result.push_back(n * i);
        }
        
        return result;
    }
};
