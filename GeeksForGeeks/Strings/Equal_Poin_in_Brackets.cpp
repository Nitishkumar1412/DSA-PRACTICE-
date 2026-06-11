class Solution {
public:
    int findIndex(string &s) {
        int n = s.size();

        int totalClose = 0;
        for(char ch : s) {
            if(ch == ')') totalClose++;
        }

        int openCnt = 0;
        int closeBefore = 0;

        for(int k = 0; k <= n; k++) {

            if(openCnt == totalClose - closeBefore)
                return k;

            if(k < n) {
                if(s[k] == '(')
                    openCnt++;
                else
                    closeBefore++;
            }
        }

        return -1;
    }
};