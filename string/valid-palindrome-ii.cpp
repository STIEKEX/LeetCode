class Solution {
public:
    bool check(string s){
        int i = 0 , j = s.size() - 1 ; 

        while(i < j){
            if(s[i] != s[j]){
                return false; 
            }
            i++ , j-- ;
        }
        return true ;
    }
    bool validPalindrome(string s) {

        int n = s.size() ; 

        int i = 0 , j = n-1 ;

        while(i < j){
            if(s[i] != s[j]){
                break ;
            }
            i++ , j-- ;
        }
        // if(i == j) return true ;
        string s1 = "" , s2 = "" ; 

        for(int k = 0 ; k<n ; k++){
            if(k != i) {
                s1 += s[k] ;
            }
            if(k != j){
                s2 += s[k] ;
            }
            
        }
        return check(s1) || check(s2) ; 


        
    }
};