class Solution {
public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            // Remove smaller or equal elements
            while (!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }

            // If stack is empty, no greater element
            if (st.empty()) {
                result[i] = -1;
            } else {
                result[i] = st.top();
            }

            // Push current element
            st.push(arr[i]);
        }

        return result;
    }
};