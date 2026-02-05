class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<n; i++){
            int j= i+1, k = n-1;
            
            while(j<k){
                int sum = arr[i] + arr[j] + arr[k];
                if(sum <target)    j++;
                else if(sum > target)   k--;
                else{
                    return true;
                }
            }
        }
        return false;
    }
};