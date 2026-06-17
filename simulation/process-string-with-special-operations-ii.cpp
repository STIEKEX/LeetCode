class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size() ; 

        long long len = 0 ; 

        for(char ch : s){

            if(ch >= 'a' && ch <= 'z'){
                len++ ; 
            }
            if(ch == '#'){
                len *= 2 ; 
            }
            if(ch == '*'){
                if(len > 0){
                    len-- ;
                }
                
            }
        }
        if(k >= len) return '.' ; 

        for(int i = n-1 ; i>=0 ; i--){
            
            char ch = s[i] ; 

            if(ch >= 'a' && ch <= 'z'){
                if(k == len-1){
                    return ch ; 
                }
                len-- ; 
            }

            if(ch == '#'){
                len = len/2 ; 
                k  = k%len ; 
            }

            if(ch == '%'){
                k = len - 1 - k ; 
            }
            if(ch == '*'){
                len++ ; 
            }
        }
        return '.' ; 
        
    }
};