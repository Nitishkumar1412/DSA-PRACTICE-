class Solution {
public:
    int countBitsFlip(int a, int b) {
        int x = a ^ b;
        int count = 0;

        while (x) {
            x = x & (x - 1); // removes the rightmost set bit
            count++;
        }

        return count;
    }
};