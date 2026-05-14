class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        if(n==0)
        {
            return 0;
        }
        int position = 1;
        while(n>0)
        {
            if(n&1)
            {
                return position;
            }
            n = n>>1;
            position++;
        }
    }
};

