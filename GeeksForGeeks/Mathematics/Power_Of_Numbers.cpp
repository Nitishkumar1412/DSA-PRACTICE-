class Solution {
public:
    int reverseExponentiation(int n) {
        int rev = 0, temp = n;
        
        // Reverse the number
        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        
        int result = 1;
        
        // Compute n^rev
        for (int i = 0; i < rev; i++) {
            result *= n;
        }
        
        return result;
    }
};