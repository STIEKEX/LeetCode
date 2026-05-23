class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.size() ; 
        int n = t.size() ;
        int i=0 , j=0 ;
        string str = "" ;
        while(j!=n){
            if(s[i] == t[j]){
                i++ ; 
                str+= t[j] ;
                j++ ;
            }else{
                j++ ;
            }
        }

        if(str == s){
            return true ;
        }
        return false ;
        
    }
};