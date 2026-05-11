
class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        
        int d = b * b - 4 * a * c;
        
        if (d < 0)
            return {-1};
        
        double r1 = (-b + sqrt(d)) / (2.0 * a);
        double r2 = (-b - sqrt(d)) / (2.0 * a);
        
        int x = floor(r1);
        int y = floor(r2);
        
        if (x < y)
            swap(x, y);
        
        return {x, y};
    }
};