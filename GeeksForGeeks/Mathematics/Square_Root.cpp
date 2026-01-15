class Solution {
  public:
    int floorSqrt(int n) {
        int i = 0, j = n;

        while (i <= j) {
            int mid = i + (j - i) / 2;
            long long sq = 1LL * mid * mid;

            if (sq == n)
                return mid;
            else if (sq < n)
                i = mid + 1;
            else
                j = mid - 1;
        }
        return j; // j is the floor(sqrt(x))
        
        
    }
};