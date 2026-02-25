class Solution {
public:
    
    void solve(stack<int>& s, int k) {
        // Base case: remove kth element
        if (k == 1) {
            s.pop();
            return;
        }
        
        int temp = s.top();
        s.pop();
        
        solve(s, k - 1);
        
        s.push(temp);
    }
    
    void deleteMid(stack<int>& s) {
        int n = s.size();
        
        if (n == 0) return;
        
        int mid = (n / 2) + 1;  // middle position from top
        
        solve(s, mid);
    }
};