class Solution {
public:
    int countNumberswith4(int n) {
        int count = 0;

        for (int i = 1; i <= n; i++) {
            int x = i;
            while (x > 0) {
                if (x % 10 == 4) {
                    count++;
                    break;   
                }
                x /= 10;
            }
        }
        return count;
    }
};
