class Solution {
public:
    int countSubstr(string S) {
        long long countOnes = 0;
        
        for(char c : S) {
            if(c == '1') 
                countOnes++;
        }
        
        return (countOnes * (countOnes - 1)) / 2;
    }
};
