class Solution {
  public:
    int countFriendsPairings(int n) {
        if(n ==1 || n==2){  // Base Case
            return n;
        }
        // Recursive approach for Single + Pair 
        return countFriendsPairings(n-1) + (n-1)*countFriendsPairings(n-2);
       
        
    }
};
