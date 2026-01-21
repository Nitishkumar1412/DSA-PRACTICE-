class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        
        for(int i=0; i<n; i++){
            if(arr[i]>largest){
                secondLargest = largest;
                largest = arr[i];
            }
            else if(secondLargest<arr[i] and largest>arr[i]) {
                    secondLargest = arr[i];
                    
                }
        }
    
        if (secondLargest == INT_MIN)
            return -1;

        return secondLargest;
    }
};