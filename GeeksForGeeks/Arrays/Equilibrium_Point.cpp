class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int totalSum = 0;

        // Step 1: Calculate total sum
        for(int num : arr) {
            totalSum += num;
        }

        int leftSum = 0;

        // Step 2: Traverse array
        for(int i = 0; i < arr.size(); i++) {
            totalSum -= arr[i];  // now this is right sum

            if(leftSum == totalSum) {
                return i;
            }

            leftSum += arr[i];
        }

        return -1;
        
    }
};