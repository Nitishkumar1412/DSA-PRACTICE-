class Solution {
  public:
    int isPowerOfFour(unsigned int n) {
        if(n<=0)    return false;
        if(n==1)    return true;
        if(n%4!=0 || n%2!=0)    return false;
        return isPowerOfFour(n/4);
    }
};