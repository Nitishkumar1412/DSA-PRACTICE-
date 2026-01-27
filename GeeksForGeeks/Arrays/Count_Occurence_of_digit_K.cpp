class Solution {
public:
    int num(int k, vector<int>& arr) {
        int count = 0;

        for (int i = 0; i < arr.size(); i++) {
            int n = arr[i];

            while (n > 0) {
                if (n % 10 == k) {
                    count++;
                }
                n /= 10;
            }
        }
        return count;
    }
};
