class Solution {
  public:
    int checkPerfectSquare(int N) {
        long long low = 1, high = N;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long sq = mid * mid;

            if (sq == N) return 1;
            else if (sq < N) low = mid + 1;
            else high = mid - 1;
        }
        return 0;
        
    }
};