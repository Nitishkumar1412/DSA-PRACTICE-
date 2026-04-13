class Solution {
public:

    void insertSorted(stack<int> &st, int x) {
        // Base condition
        if (st.empty() || st.top() <= x) {
            st.push(x);
            return;
        }

        int top = st.top();
        st.pop();

        insertSorted(st, x);

        st.push(top);
    }

    void sortStack(stack<int> &st) {
        // Base condition
        if (st.empty()) return;

        int top = st.top();
        st.pop();

        sortStack(st);

        insertSorted(st, top);
    }
};