class Solution {
public:
    bool validPalindrome(string s) {
       
       int n = s.size() ; 

       

        int i = 0 , j = n-1 ;
        if(n % 2 == 0){
        if(s[i] != s[j]) return false ;
        }
        int count = 0 ;

        while(i < j){
            if(s[i] != s[j]){
                count = count + 2 ;
            }
            i++ , j-- ;
        }
        if(n % 2 == 0 && count > 2) return false ;
        if(n % 2 == 1 && count > 0) return false ;
        return true ;


       
      
      

        
       
       
        
    }
};