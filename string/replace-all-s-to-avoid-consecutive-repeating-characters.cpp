class Solution {
public:
    string modifyString(string s) {
        int n = s.size() ; 
        
        for(int i = 0 ; i<n ; i++){
            
            if(s[i] == '?'){
                char ch = 'a' ; 
                
                while((i>0 && s[i-1] == ch) || (i<n-1 && s[i+1] == ch)){
                    ch++ ; 
                }
                s[i] = ch ;
            }
        }
        return s ; 
        
    }
};