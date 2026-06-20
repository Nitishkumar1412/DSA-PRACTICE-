class Solution {
public:
    int getLastDigit(string& a, string& b) {
        // a^0 = 1
        if (b == "0") return 1;

        int lastDigit = a.back() - '0';

        int expMod4 = 0;
        for (char ch : b) {
            expMod4 = (expMod4 * 10 + (ch - '0')) % 4;
        }

        if (expMod4 == 0) expMod4 = 4;

        int ans = 1;
        for (int i = 0; i < expMod4; i++) {
            ans = (ans * lastDigit) % 10;
        }

        return ans;
    }
};