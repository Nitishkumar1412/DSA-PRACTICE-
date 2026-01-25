class Solution {
public:
    int isDivisible(int N) {
        int sum = 0;
        int temp = N;

        while (N > 0) {
            sum += N % 10;
            N /= 10;
        }

        if (temp % sum == 0)
            return 1;
        else
            return 0;
    }
};
