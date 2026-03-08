class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> res;
        int n1 = a.size();
        int n2 = b.size();
        int i = 0, j = 0;

       
        while (i < n1 && j < n2) {
            if (a[i] <= b[j]) {
                if (res.empty() || res.back() != a[i]) {
                    res.push_back(a[i]);
                }
                i++;
            } else { 
                if (res.empty() || res.back() != b[j]) {
                    res.push_back(b[j]);
                }
                j++;
            }
        }
 
        while (i < n1) {
            if (res.empty() || res.back() != a[i]) {
                res.push_back(a[i]);
            }
            i++;
        }
        while (j < n2) {
            if (res.empty() || res.back() != b[j]) {
                res.push_back(b[j]);
            }
            j++;
        }

        return res;
    }
};