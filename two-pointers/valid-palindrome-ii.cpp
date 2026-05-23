class Solution {
public:
       bool check(string s){
            int i = 0 , j = s.size() - 1 ; 

            while(i < j){
                if(s[i] != s[j]){
                    return false ;
                }
                i++ , j-- ;
            }
            return true  ;
       }
    bool validPalindrome(string s) {

        int i = 0  , j = s.size() - 1 ; 

        while(i < j){
            if(s[i] != s[j]){
                break ;
            }   
            i++ , j-- ;
        }

         
        string str1 = "" ;
        string str2 = "" ;
        for(int k = 0 ; k<s.size() ; k++){
            if(k != j){
                str1 += s[k] ;
            }
            if(k != i){
                str2 += s[k] ;
            }
        }
        return check(str1) || check(str2) ;

        


        
    }
};