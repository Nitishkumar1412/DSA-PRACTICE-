class Solution {
public:
    int firstPosition(vector<int> &nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(low<=high){
            int mid = low + (high-low)/2;

            if(nums[mid]==target){
                if(mid == 0 || nums[mid-1]!= target)    return mid;
                else high = mid - 1;
            }
            else if(nums[mid] > target) high = mid - 1;
            else    low = mid + 1;
        }
        return -1;
    }

    int lastPosition(vector<int> &nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(low<=high){
            int mid = low + (high-low)/2;

            if(nums[mid]==target){
                if(mid == n-1 || nums[mid+1]!= target)    return mid;
                else low = mid + 1;
            }
            else if(nums[mid] > target) high = mid -1;
            else    low = mid + 1;
        }
        return -1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int f = firstPosition(nums, target);;
        int l = lastPosition(nums, target);
        return {f,l};
    }
};