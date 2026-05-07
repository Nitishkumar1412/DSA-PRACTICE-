class Solution {
  public:

    void solve(stack<int>& st, int x) {

        // Base case
        if(st.empty()) {
            st.push(x);
            return;
        }

        int topElement = st.top();
        st.pop();

        solve(st, x);

        st.push(topElement);
    }

    stack<int> insertAtBottom(stack<int> st, int x) {

        solve(st, x);

        return st;
    }
};