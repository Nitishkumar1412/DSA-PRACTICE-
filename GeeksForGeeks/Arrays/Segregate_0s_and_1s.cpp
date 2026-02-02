class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        vector<int> res;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==0){
                res.push_back(arr[i]);
            }
        }
        for(int i=0; i< arr.size(); i++){
            if(arr[i]==1){
                res.push_back(arr[i]);
            }
        }
        for(int j=0 ; j<res.size(); j++){
            arr[j] = res[j];
        }
    }
};