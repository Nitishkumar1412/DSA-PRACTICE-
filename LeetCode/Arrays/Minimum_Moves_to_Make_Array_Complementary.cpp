class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n=nums.size();
        vector<int>diff(2*limit+2,0);
        int curr=n;
        for(int i=0;i<n/2;i++){
            int a=min(nums[i],nums[n-1-i]);
            int b=max(nums[i],nums[n-1-i]);
            int minTarget=1+a;
            int maxTarget=b+limit;
            diff[minTarget]-=1;
            diff[maxTarget+1]+=1;
            int sum=a+b;
            diff[sum]-=1;
            diff[sum+1]+=1;
        }
        int mini=INT_MAX;
        int prefix=0;
        for(int i=2;i<=2*limit;i++){
            cout<<diff[i]<<" ";
            prefix+=diff[i];
            mini=min(mini,prefix+curr);
        }
        return mini;
    }
};