class Solution {
  public:
    int splitArray(vector<int>& arr, int k) {
        int n=arr.size();
        int low=*max_element(arr.begin(),arr.end());
        int high=0;
        int ans=0;
        for(int num:arr)high+=num;
        while(low<=high){
            int mid=(low+high)/2;
             int count=1;
             int sum=0;
            for(int i=0;i<n;i++){
                if(sum+arr[i]<=mid)sum+=arr[i];
                else{
                   count++;
                   sum=arr[i];
                }
            }
            if(count>k)low=mid+1;
            else{
                ans=mid;
                high=mid-1;
            }
        }return ans;
        
    }
};