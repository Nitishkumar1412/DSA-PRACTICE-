class Solution {
  public:
    bool isPowerofTwo(int n) {
        if(!n) return false;
        if(n<=0)    return false;
        if(n==1) return true;
        return n%2==0 and isPowerofTwo(n/2);
        
    }
};