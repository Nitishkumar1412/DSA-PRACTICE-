class Solution {
public:
    int coin(vector<int>& arr) {
        int i = 0, j = arr.size() - 1;

        while (i < j) {
            if (arr[i] >= arr[j])
                i++;   // remove left coin
            else
                j--;   // remove right coin
        }

        return arr[i];
    }
};