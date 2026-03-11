class Solution {
public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> ans;

        int firstNeg = 0;

        for(int i = 0; i <= n - k; i++) {

            while(firstNeg < i + k && (firstNeg < i || arr[firstNeg] >= 0)) {
                firstNeg++;
            }

            if(firstNeg < i + k)
                ans.push_back(arr[firstNeg]);
            else
                ans.push_back(0);
        }

        return ans;
    }
};