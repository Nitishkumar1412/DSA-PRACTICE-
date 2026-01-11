class Solution {
  public:
    void sort012(vector<int>& arr) {
        int count1=0, count2=0, count3=0;
        
        for(int x:arr){
            if(x==0)    count1++;
            else if(x==1)   count2++;
            else    count3++;
        }
        int i=0;
        while(count1--) arr[i++]=0;
        while(count2--) arr[i++]=1;
        while(count3--) arr[i++]=2;
        
    }
};