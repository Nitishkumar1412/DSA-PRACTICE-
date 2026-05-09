string transform(string S) {
    string ans = "";
    
    int n = S.length();
    int count = 1;
    
    for(int i = 1; i <= n; i++) {
        
        if(i < n && tolower(S[i]) == tolower(S[i - 1])) {
            count++;
        }
        else {
            ans += to_string(count);
            ans += tolower(S[i - 1]);
            count = 1;
        }
    }
    
    return ans;
}