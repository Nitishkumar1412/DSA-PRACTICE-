class Solution {
public:
    int maxProduct(int n) {
        if (n == 2) return 1;
        if (n == 3) return 2;

        long long ans = 1;

        while (n > 4) {
            ans *= 3;
            n -= 3;
        }

        ans *= n;  // n is now 2, 3, or 4
        return (int)ans;
    }
};