class Solution {
public:
    int climbStairs(int n) {
        if(n<=3)    return n;
        
        int prev1 = 3;
        int prev2 = 2;
        int result = 0;
        for(int i=4; i<=n; i++){
            result = prev1 + prev2;
            prev2 = prev1;
            prev1 = result;

        }
        return prev1;       
    }
};