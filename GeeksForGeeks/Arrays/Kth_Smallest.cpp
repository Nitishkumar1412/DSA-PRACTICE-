#include <algorithm>

class Solution {
public:
    int kthSmallest(vector<int> &arr, int k) {
        nth_element(arr.begin(), arr.begin() + k - 1, arr.end());
        return arr[k - 1];
    }
};