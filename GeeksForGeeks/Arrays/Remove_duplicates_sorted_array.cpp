class Solution {
public:
    vector<int> removeDuplicates(vector<int>& arr) {
        if (arr.size() == 0) return {};

        int res = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] != arr[i - 1]) {
                arr[res] = arr[i];
                res++;
            }
        }

        // Resize array to contain only unique elements
        arr.resize(res);
        return arr;
    }
};
