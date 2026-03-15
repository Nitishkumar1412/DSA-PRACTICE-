class Solution {
public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;

        rotate(arr.begin(), arr.begin() + d, arr.end());
    }
};