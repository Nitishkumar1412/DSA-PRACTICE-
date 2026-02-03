class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        string res="";

        sort(arr.begin(), arr.end());
        int i = 0;
        while(i<arr[0].length() && arr[0][i] == arr[arr.size()-1][i]){
            res += arr[0][i];
            i++;
        }
        return res;
    }
};