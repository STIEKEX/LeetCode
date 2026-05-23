class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>check(256 , false) ;
        int n = s.size() ; 
        int l = 0 ; 
        int r = 0; 
        int maxlen = 0 ; 

        while(r < n){
            char c =s[r] ;
            if(check[c] == false){
                check[c] = true ;
                maxlen = max(maxlen ,  r-l+1) ;
                r++ ;
            }else{
                check[s[l]] = false ;
                l++ ;
            }
        }
        return maxlen ;
    }
};