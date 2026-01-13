class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string n,p;
        for(int i=0; i<word1.size(); i++){
            n = n + word1[i];
        }

        for(int i=0; i<word2.size(); i++){
            p = p + word2[i];
        }
        
        if(n==p)    return true;
        else    return false;
        
    }
};