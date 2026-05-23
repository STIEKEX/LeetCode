class Solution {
public:
    int appendCharacters(string s, string t) {

        int i = 0 , j = 0 ; 

        int m = s.size() ; 
        int n = t.size() ; 

        int count = 0 ;
        while(i<m && j<n){
            if(s[i] == t[j]){
                j++ ;
                count++ ;
            }
           i++ ;
        }
        return n-count ;
        
        
        
    }
};