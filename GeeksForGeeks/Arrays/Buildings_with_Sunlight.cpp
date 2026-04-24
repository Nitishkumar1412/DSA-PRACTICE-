class Solution {
public:
    int visibleBuildings(vector<int>& arr) {
        int count = 1; // first building always visible
        int maxHeight = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] >= maxHeight) {  // note >=
                count++;
                maxHeight = arr[i];
            }
        }

        return count;
    }
};