class Solution {
public:
    int maxProduct(vector<int> arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        
        int prod1 = arr[n-1] * arr[n-2] * arr[n-3];
        int prod2 = arr[0] * arr[1] * arr[n-1];
        
        return max(prod1, prod2);
    }
};
