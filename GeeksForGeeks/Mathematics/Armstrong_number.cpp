class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum = 0;
        int temp = n;
        while(temp>0){
            int digit = temp%10;
            sum = sum + digit*digit*digit;
            temp = temp/10;
        }
        if(sum == n)    return true;
        else return false;
        
    }
};