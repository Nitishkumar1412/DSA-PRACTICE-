class Solution {
public:
    char getMaxOccuringChar(string& s) {
        int freq[26] = {0};
        
        for (char c : s)
            freq[c - 'a']++;

        int maxIdx = 0;
        for (int i = 1; i < 26; i++)
            if (freq[i] > freq[maxIdx])
                maxIdx = i;

        return 'a' + maxIdx;
    }
};