class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n=s1.size();
        map<char,int>st1,st2,st3,st4;
        for(int i=0;i<n;i++){
            if(i&1){
                st1[s1[i]]++;
                st3[s2[i]]++;
            }
            else{
                st2[s1[i]]++;
                st4[s2[i]]++;
            }
        }
        if(st1==st3 && st2==st4){
            return true;
        }
        return false;
    }
};