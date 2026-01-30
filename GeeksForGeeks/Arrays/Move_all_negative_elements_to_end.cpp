class Solution {
  public:
    void segregateElements(vector<int>& arr) {
       int n = arr.size();
       vector<int> res;
       
       for(int i=0; i<n;i++){
           if(arr[i]>=0){
               res.push_back(arr[i]);
               
           }
       }
       for(int j=0; j<n; j++){
           if(arr[j]<0){
               res.push_back(arr[j]);
           }
       }
       for(int k=0; k<n; k++){
           arr[k] = res[k];
       }
    }
}; 