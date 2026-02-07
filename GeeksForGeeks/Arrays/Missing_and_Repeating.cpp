class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int> s;
        
        int repeating = -1;
        long long actualSum = 0;
        
        for(int i = 0; i < n; i++){
            actualSum += arr[i];
            
            if(s.find(arr[i]) != s.end()){
                repeating = arr[i];
            }
            s.insert(arr[i]);
        }
        
        long long expectedSum = (1LL * n * (n + 1)) / 2;
        int missing = expectedSum + repeating - actualSum;
        
        return {repeating, missing};
    }
};
