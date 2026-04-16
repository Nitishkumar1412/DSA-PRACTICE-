class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = 0;
        int distance = x ^ y;
        while (distance > 0) {
            
            if (distance & 1) {
                res++;
            }
            distance >>= 1;
        }

        return res;
    }
};