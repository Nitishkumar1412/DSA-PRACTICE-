class Solution {
public:
    bool isSubset(vector<int>& a, vector<int>& b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0;

        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j]) {
                i++;
                j++;
            }
            else if (a[i] < b[j]) {
                i++;
            }
            else {
                return false;
            }
        }

        return (j == b.size());
    }
};
