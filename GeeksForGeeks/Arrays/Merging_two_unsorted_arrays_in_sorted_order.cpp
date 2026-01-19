class Solution {
public:
    void sortedMerge(vector<int>& arr1, vector<int>& arr2, vector<int>& res) {
        
        res.clear();
        
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        int i = 0, j = 0;
        int n = arr1.size(), m = arr2.size();

        while(i < n && j < m) {
            if(arr1[i] <= arr2[j]) {
                res.push_back(arr1[i]);
                i++;
            } else {
                res.push_back(arr2[j]);
                j++;
            }
        }

        while(i < n) {
            res.push_back(arr1[i++]);
        }

        while(j < m) {
            res.push_back(arr2[j++]);
        }
        arr1 = res;
    }
};
