class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>results;
        int i=0,j=0;
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                results.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                results.push_back(nums2[j]);
                j++;
            }
            else
            {
                results.push_back(nums1[i]);
                results.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        while(i<m)
        {
            results.push_back(nums1[i]);
            i++;
        }
        while(j<n)
        {
            results.push_back(nums2[j]);
            j++;
        }
        int p = m+n;
        if((p)%2!=0)
        {
            return results[p/2];
        }
        else
        {
            return (results[p/2-1] + results[p/2])/2.0;
        }
    }
};