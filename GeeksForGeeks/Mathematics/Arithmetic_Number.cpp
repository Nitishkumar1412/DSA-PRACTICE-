class Solution {
  public:
    int inSequence(int a, int b, int c) {
        
        // If common difference is 0
        if(c == 0)
            return (a == b);

        // Check if b can be reached from a
        if((b - a) % c == 0 && (b - a) / c >= 0)
            return 1;

        return 0;
    }
};