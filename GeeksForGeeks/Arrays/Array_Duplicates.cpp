class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n = arr.size();
        vector<int> res;
        vector<int> freq(n+1,0);
        
        for(int num: arr){
            freq[num]++;
            if(freq[num]==2)    res.push_back(num);
        }
        return res;
    }
};