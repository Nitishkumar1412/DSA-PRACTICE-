class Solution {
  public:
    bool isPalindrome(int n) {
        if(n<0){
            return false;
        }
        long long rev = 0, num = n;
        while(num){
            rev = rev*10 + num%10;
            num = num/10;
        }
        return rev == n;
    }
};