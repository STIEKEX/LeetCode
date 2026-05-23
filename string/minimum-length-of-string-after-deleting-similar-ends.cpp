class Solution {
public:
    int minimumLength(string s) {
        int n = s.size() ; 

        int i = 0 , j = n-1 ; 
        char first  , last ;
        while(i < j){

            if(s[i] == s[j]){
                first = s[i] ;
                last = s[j] ;
                i++ , j-- ;

                while(i<=j && s[i] == first){
                    i++ ;
                }
                while(j>=i && s[j] == last){
                    j-- ;
                }
            }else{
                break ;
            }
        }
        return j-i+1 ;
        
    }
};