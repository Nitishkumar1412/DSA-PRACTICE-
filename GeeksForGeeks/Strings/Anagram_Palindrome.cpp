class Solution {
public:
    bool canFormPalindrome(string &s) {
        vector<int> freq(26, 0);

        // Count frequencies
        for(char c : s) {
            freq[c - 'a']++;
        }

        int oddCount = 0;

        // Count odd frequencies
        for(int i = 0; i < 26; i++) {
            if(freq[i] % 2 != 0) {
                oddCount++;
            }
        }

        // Check condition
        return oddCount <= 1;
    }
};