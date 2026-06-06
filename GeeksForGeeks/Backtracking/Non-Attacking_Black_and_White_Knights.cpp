class Solution {
public:
    long long numOfWays(int n, int m) {
        long long N = n, M = m;

        long long total = N * M * (N * M - 1);
        long long attacking = 4LL * (N - 1) * max(0LL, M - 2)
                            + 4LL * (M - 1) * max(0LL, N - 2);

        return total - attacking;
    }
};