class Solution {
public:
    int sumDiffPairs(vector<int>& arr, int k) {

        sort(arr.begin(), arr.end());

        int sum = 0;

        for (int i = arr.size() - 1; i > 0; i--) {

            // pair can be formed
            if (arr[i] - arr[i - 1] < k) {

                sum += arr[i] + arr[i - 1];

                i--; // skip both elements
            }
        }

        return sum;
    }
};