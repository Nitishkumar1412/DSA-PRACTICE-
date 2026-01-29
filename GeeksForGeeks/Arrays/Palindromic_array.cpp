class Solution {
public:
    bool isPalinArray(vector<int> &arr) {
        for (int i = 0; i < arr.size(); i++) {
            int num = arr[i];
            int original = num;
            int rev = 0;

            while (num > 0) {
                rev = rev * 10 + num % 10;
                num /= 10;
            }

            if (rev != original)
                return false;   
        }
        return true;  
    }
};
