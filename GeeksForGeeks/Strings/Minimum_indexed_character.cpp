class Solution {
public:
    int minIndexChar(string &s1, string &s2) {
        vector<int> freq(26, 0);
        
        // Mark characters present in s2
        for(char ch : s2) {
            freq[ch - 'a'] = 1;
        }
        
        // Find first character in s1 also present in s2
        for(int i = 0; i < s1.size(); i++) {
            if(freq[s1[i] - 'a']) {
                return i;
            }
        }
        
        return -1;
    }
};