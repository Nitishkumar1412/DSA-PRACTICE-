class Solution {
  public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        
        int a = 0, b = 1, c;
        
        for(int i = 2; i <= n; i++) {
            c = (a + b) % 10; // keep only last digit
            a = b;
            b = c;
        }
        
        return b;
    }
};