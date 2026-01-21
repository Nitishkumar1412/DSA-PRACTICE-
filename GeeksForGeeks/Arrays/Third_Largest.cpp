class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        long long v1 = LLONG_MIN;
        long long v2 = LLONG_MIN;
        long long v3 = LLONG_MIN;
        for(int i=0; i<arr.size(); i++){
            
            if(arr[i]>v1){
                v3 = v2;
                v2 = v1;
                v1 = arr[i];
            }
            else if(arr[i]>v2){
                v3 = v2;
                v2 = arr[i];
            }
            else if(arr[i]>v3){
                v3 = arr[i];
            }
        }
        if(v3 == LLONG_MIN)   return v1;
        else    return v3;
        
    }
};