class Solution {
public:
    int calculate(string s) {
        long long curr = 0;
        long long last = 0;
        long long result = 0;
        char op = '+';
        
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            
            if (isdigit(c)) {
                curr = curr * 10 + (c - '0');
            }
            
            // If operator or end of string
            if ((!isdigit(c) && c != ' ') || i == s.size() - 1) {
                
                if (op == '+') {
                    result += last;
                    last = curr;
                }
                else if (op == '-') {
                    result += last;
                    last = -curr;
                }
                else if (op == '*') {
                    last = last * curr;
                }
                else if (op == '/') {
                    last = last / curr;
                }
                
                op = c;
                curr = 0;
            }
        }
        
        return result + last;
    }
};