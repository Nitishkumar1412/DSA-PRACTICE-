class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result;
        int n = nums1.size();
        int m = nums2.size();

        for(int i=0; i<n; i++){
            result.push_back(nums1[i]);

        }
        for(int i=0; i<m; i++){
            result.push_back(nums2[i]);

        }

        sort(result.begin(),result.end());

        int p = result.size();

        if(p%2==1){
            return result[p/2];
        }
        else{
            return (result[p/2-1] + result[p/2])/2.0;
        }


        
        
    }
};