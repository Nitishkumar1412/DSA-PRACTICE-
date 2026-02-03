class Solution {
public:
    string largestOddNumber(string num) {
        for(int i= num.size(); i>=0; i--){
            int p = num[i] - '0';
            if(p%2==1)  return num.substr(0, i+1);
        }
        return "";
    }
};