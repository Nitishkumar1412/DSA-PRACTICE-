class Solution {
public:
    int minToggle(vector<int>& arr) {
        int zeros = 0;

        // count total zeros
        for (int x : arr) {
            if (x == 0) zeros++;
        }

        int onesLeft = 0;
        int zerosRight = zeros;

        int ans = zeros; // split before first element

        for (int x : arr) {

            if (x == 1)
                onesLeft++;
            else
                zerosRight--;

            ans = min(ans, onesLeft + zerosRight);
        }

        return ans;
    }
};