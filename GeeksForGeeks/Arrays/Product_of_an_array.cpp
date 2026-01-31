class Solution {
public:
    long long int product(vector<int> &arr) {
        long long mod = 1000000007;
        long long product = 1;

        for (int i = 0; i < arr.size(); i++) {
            product = (product * arr[i]) % mod;  
        }

        return product;
    }
};
