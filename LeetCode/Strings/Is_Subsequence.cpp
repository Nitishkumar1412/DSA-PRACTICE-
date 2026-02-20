class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1=s.length();
        int n2=t.length(),j=0;
        for(int i=0;i<n2;i++){
            if(s[j]==t[i]){
                j++;
            }
        }
        if(n1==j)return true;
        else return false;
    }
};