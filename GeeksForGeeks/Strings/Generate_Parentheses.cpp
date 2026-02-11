class Solution {
public:

    void solve(string curr, int open, int close, vector<string>& ans){
        if(open == 0 && close == 0){
            ans.push_back(curr);
            return;
        }
        if(open > 0){
            solve(curr + '(', open-1, close, ans);
        }
        if(close > open){
            solve(curr + ')', open, close-1, ans);
        }
    }

    vector<string> generateParentheses(int n) {
        if(n % 2 != 0) return {};
        vector<string> ans;
        int pairs = n / 2; 
        solve("", pairs, pairs, ans);
        return ans;
    }
};
