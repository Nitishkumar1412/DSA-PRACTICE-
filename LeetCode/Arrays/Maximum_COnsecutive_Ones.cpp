class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size = nums.size();
        int count = 0, maximum = 0;

        for(int i=0; i<size; i++){
            if(nums[i] == 1){
                count++;
                if(maximum<count)   maximum = count;
            }
            else{
                count = 0;
            }
        }

        return maximum;
    }
};