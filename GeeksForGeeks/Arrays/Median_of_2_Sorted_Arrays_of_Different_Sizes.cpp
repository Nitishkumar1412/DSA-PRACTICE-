class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        vector<int> result;
        int n = a.size();
        int m = b.size();

        for(int i=0; i<n; i++){
            result.push_back(a[i]);

        }
        for(int i=0; i<m; i++){
            result.push_back(b[i]);

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