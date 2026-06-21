class Solution {
public:
    vector<int> rotate(int n, int d) {
        d %= 16;

        int left = ((n << d) | (n >> (16 - d))) & 0xFFFF;
        int right = ((n >> d) | (n << (16 - d))) & 0xFFFF;

        return {left, right};
    }
};