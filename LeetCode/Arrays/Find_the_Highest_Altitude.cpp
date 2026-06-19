class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res = 0, curr = 0;
        for (int x : gain) {
            curr += x;
            res = max(res, curr);
        }
        return res;
    }
};