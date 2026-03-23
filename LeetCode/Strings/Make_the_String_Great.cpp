class Solution {
public:
    string makeGood(string s) {

        if(s.length() < 2)
        return s;
        int i=0;
        while(i < (s.length()))
        {
            if(abs(s[i]-s[i+1]) == 32)
            {
                s.erase(i,2);
                cout<<s[0];
                if (i>0) i--;
            }
            else i++;
        }
        return s;
    }
};