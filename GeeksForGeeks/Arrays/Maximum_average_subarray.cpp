class Solution {
public:
    int findMaxAverage(int arr[], int n, int k) {
        int left = 0;
        double sum = 0;

        // First window
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }

        double max_sum = sum;
        int max_index = 0;

        // Slide the window
        for (int right = k; right < n; right++) {
            sum += arr[right];
            sum -= arr[left];
            left++;

            if (sum > max_sum) {
                max_sum = sum;
                max_index = left;
            }
        }

        return max_index;
    }
};