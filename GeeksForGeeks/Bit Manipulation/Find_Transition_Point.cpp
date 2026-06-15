class Solution {
public:
    int transitionPoint(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 1)
                return i;
        }
        return -1;
    }
};