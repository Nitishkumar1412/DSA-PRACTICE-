class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(char ch:s)
        {
            if('0'<=ch&&ch<='9')
                st.pop();

            else
            {
                st.push(ch);
            }
        }
            string result="";
                while(!st.empty())
            {
                char c=st.top();
                result+=c;
                st.pop();
            }
        reverse(result.begin(),result.end());
        return result;
    }
};