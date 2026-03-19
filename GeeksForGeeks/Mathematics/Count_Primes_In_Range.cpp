class Solution {
public:
    int countPrimes(int L, int R) {
        if (R < 2) return 0;

        vector<bool> isPrime(R + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= R; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= R; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = max(L, 2); i <= R; i++) {
            if (isPrime[i]) count++;
        }

        return count;
    }
};