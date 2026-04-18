class Solution {
public:
    int maxOnes(vector<int>& arr) {
        int totalOnes = 0;
        
        // Step 1: count total ones
        for (int x : arr) {
            if (x == 1) totalOnes++;
        }

        // Step 2: apply Kadane on transformed array
        int maxGain = 0, currGain = 0;

        for (int x : arr) {
            int val = (x == 0) ? 1 : -1;

            currGain = max(val, currGain + val);
            maxGain = max(maxGain, currGain);
        }

        // Step 3: result
        return totalOnes + maxGain;
    }
};