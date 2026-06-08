class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        if(m==n)return -1;
        int a=m^n;
        a=(a&(-a));
        return log2(a)+1;
        
    }
};