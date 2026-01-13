class Solution {
public:
    string defangIPaddr(string address) {
        // int n = address.size();
        string result;
        for(char x:address){
            if(x=='.'){
                result = result + "[.]";
            }
            else{
                result = result + x;
            }

        }
        return result;
        
    }
};