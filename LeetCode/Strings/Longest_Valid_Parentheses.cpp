class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.length()== 0 || s.length()==1) return 0;

        int left = 0, right = 0, maximum = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='(')   left++;
            else    right++;


            if(left==right) maximum = max(maximum, left+right);
            else if(right > left){
                left = 0;
                right = 0;
            }

        }
        left = 0;
        right = 0;

        for(int i=s.length()-1 ; i>=0; i--){
            if(s[i]=='(')   left++;
            else    right++;


            if(left==right) maximum = max(maximum, left+right);
            else if(left > right){
                left = 0;
                right = 0;
            }
        }  
        return maximum; 
    
    }
};