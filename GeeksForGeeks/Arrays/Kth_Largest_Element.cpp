class Solution {
  public:
    
    int KthLargest(vector<int> &arr, int k) {
       sort(arr.begin(), arr.end());
       return arr[arr.size()-k];
        
    }
};