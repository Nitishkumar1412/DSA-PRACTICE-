class Solution {
public:
    string removeDuplicates(string s) {
        bool used[256] = {false};
        string ans = "";

        for(char ch : s) {
            if(!used[ch]) {
                ans += ch;
                used[ch] = true;
            }
        }

        return ans;
    }
};