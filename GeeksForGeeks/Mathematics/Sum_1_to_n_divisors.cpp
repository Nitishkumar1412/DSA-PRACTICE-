class Solution {
  public:
    long long sumOfDivisors(long long n) {
        int total_sum = 0;
        for(int i = 1; i<=n; i++){
            total_sum += i*(n/i);
        }
        return total_sum;
    }
};