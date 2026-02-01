class Solution {
  public:
    void removeCharacter(string &s, char c) {
        while(s.find(c) != string::npos){
            s.erase(s.find(c), 1);
        }
    }
};