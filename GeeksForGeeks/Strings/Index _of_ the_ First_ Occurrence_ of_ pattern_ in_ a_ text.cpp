class Solution {
  public:
    int findMatching(string text, string pat) {
        int n = pat.size();
        
        for(int i=0; i<text.size(); i++){
            if(text.substr(i,n)==pat)   return i;
            
        }
        return -1;
        
    }
};