class Solution {
public:
    void swapElements(vector<int> &arr) {
        int n = arr.size();
        
        for(int i = 0; i + 2 < n; i++) {
            swap(arr[i], arr[i+2]);
        }
    }
};
