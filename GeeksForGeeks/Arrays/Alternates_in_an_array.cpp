class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        int n = arr.size();
        vector<int> res;
        for(int i=0; i<n; i=i+2){
            res.push_back(arr[i]);
        }
        return res;
    }
};