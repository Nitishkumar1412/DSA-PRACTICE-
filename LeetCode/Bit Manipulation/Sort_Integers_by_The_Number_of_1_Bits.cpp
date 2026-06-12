class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>bit(20);
        for(int i=0;i<n;i++){
            int cnt=0;
            int temp=arr[i];
            while(temp>0){
                if(temp&1){
                    cnt++;
                }
                temp/=2;
            }
            bit[cnt].push_back(arr[i]);
        }
        vector<int>ans;
        for(int i=0;i<20;i++){
            for(auto &x:bit[i]){
                ans.push_back(x);
            }
        }
        return ans;
    }
};