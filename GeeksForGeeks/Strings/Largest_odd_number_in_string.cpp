class Solution {
  public:
    string maxOdd(string s) {
        for(int i=s.size()-1; i>=0; i--){
            int p = s[i]-'0';
            if(p%2==1)  return s.substr(0, i+1);
        }
        return "";
    }
};