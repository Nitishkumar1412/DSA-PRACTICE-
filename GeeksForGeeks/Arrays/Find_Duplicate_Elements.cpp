class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        for(int i=0; i+4<arr.size(); i++){
            if(arr[i]== arr[i+4]){
                 return arr[i];
            } 
        }
        return -1;
    } 
};
