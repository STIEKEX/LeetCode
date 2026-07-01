class Solution {
public:
    bool check(int i , int j , string s ){

        while(i <= j ){
            if(s[i] != s[j]){
                return false; 
            }
            i++ , j-- ; 
        }
        return true ;

    }

    

    string longestPalindrome(string s) {
       

       int ans = 0; 
        int n = s.size() ; 
        int start = 0 ;
       for(int i =0  ; i<n ; i++){

             for(int j = i ; j<n ; j++){
                int len = j-i+1 ; 
                if(check(i , j , s) && len > ans){
                    start = i ;
                    ans = max(ans , len) ;
                }
             }
       }
       return s.substr(start , ans) ;
        
    }
};