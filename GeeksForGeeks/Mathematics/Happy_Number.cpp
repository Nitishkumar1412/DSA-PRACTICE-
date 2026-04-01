class Solution {
  public:
    int isHappy(int N) {
       if(N==1 || N==7) return true;
        else if(N<10) return false;
        else{
            int sum=0;
            while(N>0){
                int temp=N%10;
                sum+= temp*temp;
                N=N/10;
            }
            return isHappy(sum);
        }
        
    }
};