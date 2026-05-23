class Solution {
public:
        int isvowel(char ch){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                return 1 ;
            }
            else if(ch >= '0' && ch <= '9'){
                return 2 ;
            }
            else if(ch == ' '){
                return 3 ;
            }
            return 0;
            
        }
    int vowelConsonantScore(string s) {
        int c = 0 ; 
        int v = 0 ;
        for(char ch : s){
            if(isvowel(ch) == 0){
                c++ ;
            }
            else if (isvowel(ch) == 1){
                v++ ;
            }
        }
        int ans  = 0 ;
        if(c > 0){
            ans = floor(v/c) ;
        }
        return ans ;
        
        
    }
};