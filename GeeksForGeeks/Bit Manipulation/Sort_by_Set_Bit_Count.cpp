class Solution {
public:
    static bool cmp(int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        
        // Sort by descending set bit count
        return countA > countB;
    }

    vector<int> sortBySetBitCount(vector<int>& arr) {
        stable_sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};