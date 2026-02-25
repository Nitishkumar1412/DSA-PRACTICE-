class Solution {
public:
    int firstRepeated(vector<int> &arr) {
        unordered_set<int> seen;
        int n = arr.size();
        int ans = -1;
        
        for(int i = n - 1; i >= 0; i--) {
            if(seen.find(arr[i]) != seen.end()) {
                ans = i;  // update index
            } else {
                seen.insert(arr[i]);
            }
        }
        
        // Return 1-based index
        return (ans == -1) ? -1 : ans + 1;
    }
};