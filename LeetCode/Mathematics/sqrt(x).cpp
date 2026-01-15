class Solution {
public:
    int mySqrt(int x) {
        int i = 0, j = x;

        while (i <= j) {
            int mid = i + (j - i) / 2;
            long long sq = 1LL * mid * mid;

            if (sq == x)
                return mid;
            else if (sq < x)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return j; // j is the floor(sqrt(x))
    }
};