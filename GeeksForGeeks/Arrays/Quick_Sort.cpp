class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if(low>=high){  // Base case
            return;
        }
        
        int pivotIdx = partition(arr, low, high);
        quickSort(arr, low, pivotIdx - 1);
        quickSort(arr, pivotIdx + 1, high);
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        int i = low - 1;
        int pivot = arr[high];
        for(int j = low; j< high; j++){
            if(arr[j]<= pivot){
                i++;
                swap(arr[i], arr[j]);
            }
        }
        i++;
        swap(arr[i], arr[high]); // Pivot placement
        return i;
    }
};