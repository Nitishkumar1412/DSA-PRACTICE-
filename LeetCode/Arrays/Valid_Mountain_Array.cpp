class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();

        if(n<3) return false;

        int max = 0;
        int index = 0;
        for(int i=0; i<n; i++){
            if(arr[i]>max){
                max = arr[i];
                index = i;
            }
        }

        // check if only increasing or decreasing

        if(index == 0 || index == n-1){
            return false;
        }

        //Check for Increasing
        for(int i=1; i<=index; i++){
            if(arr[i]>arr[i-1]){
                continue;
            }
            else {
                return false;
            }
        }

        //Check for Decreasing
        for(int i=index; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                continue;
            }
            else{
                return false;
            }
        }

        return true;
    }
};