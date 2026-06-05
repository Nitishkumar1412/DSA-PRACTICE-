class Solution {
public:
    
    bool isPowerOf2(int n) {
        return (n > 0 && (n & (n - 1)) == 0);
    }
    
    string lexicographicallySmallest(string &s, int k) {
        
        int n = s.size();
        
        // Correct k
        if (isPowerOf2(n))
            k /= 2;
        else
            k *= 2;
        
        // Invalid cases
        if (k >= n || k < 0)
            return "-1";
        
        int keep = n - k;
        string st;
        
        // Monotonic stack approach
        for (char c : s) {
            while (!st.empty() && st.back() > c && k > 0) {
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }
        
        // If removals still left
        while (k > 0 && !st.empty()) {
            st.pop_back();
            k--;
        }
        
        // Keep only required length
        st = st.substr(0, keep);
        
        return st.empty() ? "-1" : st;
    }
};