class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> vec(26, -1);
        int count = 0;

        for(auto &c : word){
            if(c >= 'A' && c <= 'Z'){
                if(vec[c-'A'] == -1){
                    vec[c-'A'] = 2;
                } else if(vec[c-'A'] == 1){
                    count++;
                    vec[c-'A'] = 3;
                }
            } else if(c >= 'a' && c <= 'z'){
                if(vec[c-'a'] == -1){
                    vec[c-'a'] = 1;
                } else if(vec[c-'a'] == 2){
                    vec[c-'a'] = 4; //invalid
                } else if(vec[c-'a'] == 3){
                    count--;
                    vec[c-'a'] = 4; //invalid
                }
            }
        }
        return count;
    }
};