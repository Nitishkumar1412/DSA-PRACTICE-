class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        int maxWater = 0;
        int lp = 0, rp = n-1;
        
        while(lp < rp){
            int width = rp - lp;
            int height = min(arr[lp], arr[rp]);
            int currWater = width* height;
            
            maxWater = max(maxWater, currWater);
            
            arr[lp] < arr[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};