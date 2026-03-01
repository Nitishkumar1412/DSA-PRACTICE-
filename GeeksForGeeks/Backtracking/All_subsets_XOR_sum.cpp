class Solution {
  public:
    int subsetXORSum(vector<int>& arr) {
        int sumTotal = 0;

        for (int num : arr) {
            sumTotal |= num;
        }
        return sumTotal << (arr.size() - 1);
        
    }
};