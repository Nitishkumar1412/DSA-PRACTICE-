class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        int n1=s1.length();
        int n2=s2.length(),j=0;
        for(int i=0;i<n2;i++){
            if(s1[j]==s2[i]){
                j++;
            }
        }
        if(n1==j)return true;
        else return false;
        
    }
};