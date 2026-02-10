class Solution {
  public:
  
    int firstPosition(vector<int>& arr, int x){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(arr[mid]==x){
                if(mid == 0 || arr[mid-1]!= x) return mid;
                else    high = mid - 1;
            }
            else if(arr[mid] > x)  high = mid -1;
            else    low = mid + 1;
        }
        return -1;
    }
    
    int lastPosition(vector<int>& arr, int x){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(arr[mid]==x){
                if(mid == n-1 || arr[mid+1]!= x) return mid;
                else    low = mid + 1;
            }
            else if(arr[mid] > x)  high = mid -1;
            else    low = mid + 1;
        }
        return -1;
    }
    
    vector<int> find(vector<int>& arr, int x) {
        int f = firstPosition(arr, x);
        int l = lastPosition(arr, x);

        return {f,l};
        
    }
};