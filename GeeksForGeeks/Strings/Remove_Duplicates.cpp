class Solution {
public:
    string removeDups(string &s) {
        string result = "";
        
        for(char c : s) {
            if(result.find(c) == string::npos) {
                result += c;
            }
        }
        
        return result;
    }
};