class Solution {
  public:
    string reverse(const string& S) {
        stack<char> st;
        string res="";
        
        for(char c:S){
            st.push(c);
        }
        while(!st.empty()){
            res = res + st.top();
            st.pop();
        }
        return res;
    }
};