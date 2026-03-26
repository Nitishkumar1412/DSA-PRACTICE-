class Solution {
public:
    void solve(int n, int lastPlace, string ans, vector<string>& res) {
        if(n == 0) {
            res.push_back(ans);
            return;
        }

        if(lastPlace == 0) {
            solve(n - 1, 1, ans + '1', res);
        } 
        else {
            solve(n - 1, 1, ans + '1', res);
            solve(n - 1, 0, ans + '0', res);
        }
    }

    vector<string> validStrings(int n) {
        vector<string> res;

        solve(n, 1, "", res);

        return res;
    }
};