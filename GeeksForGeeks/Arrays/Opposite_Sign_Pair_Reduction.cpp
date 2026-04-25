class Solution {
public:
    vector<int> reducePairs(vector<int>& arr) {
        vector<int> st;
        
        for (int x : arr) {
            while (!st.empty() && ((st.back() > 0 && x < 0) || (st.back() < 0 && x > 0))) {
                
                int a = st.back();
                st.pop_back();
                
                if (abs(a) > abs(x)) {
                    x = a;   
                } 
                else if (abs(a) == abs(x)) {
                    x = 0;   
                    break;
                }
                
            }
            
            if (x != 0)
                st.push_back(x);
        }
        
        return st;
    }
};