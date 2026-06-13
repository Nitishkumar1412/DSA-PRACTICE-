class Solution {
    static const long long MOD = 1000000007;

    long long power(long long a, long long b) {
        long long res = 1;
        while (b) {
            if (b & 1) res = (res * a) % MOD;
            a = (a * a) % MOD;
            b >>= 1;
        }
        return res;
    }

public:
    int computeValue(int n) {
        long long fact = 1;

        for (int i = 1; i <= 2 * n; i++)
            fact = (fact * i) % MOD;

        long long factN = 1;
        for (int i = 1; i <= n; i++)
            factN = (factN * i) % MOD;

        long long invFactN = power(factN, MOD - 2);

        return (fact * invFactN % MOD * invFactN) % MOD;
    }
};