class Solution {
public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        arr.push_back(0);              

        for (int i = arr.size() - 1; i > index; i--) {
            arr[i] = arr[i - 1];        // shift right
        }

        arr[index] = val;               // insert
    }
};
