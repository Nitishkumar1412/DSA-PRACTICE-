class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        int ans = nums[0] + nums[1] + nums[2];  
        
        for(int a = 0; a < n - 2; a++){
            for(int b = a + 1; b < n - 1; b++){
                for(int c = b + 1; c < n; c++){
                    
                    int sum = nums[a] + nums[b] + nums[c];
                    
                    if(abs(target - sum) < abs(target - ans)){
                        ans = sum;
                    }
                }
            }
        }
        
        return ans;
    }
};