class Solution {
public:
    string revStr(string s) {
        int low = 0;
        int high = s.size() - 1;

        while (low < high) {
            swap(s[low], s[high]);
            low++;
            high--;
        }

        return s;
    }
};
