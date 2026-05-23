class Solution {
public: 
    const int MOD = 1e9 + 7 ;
    int numSub(string s) {


        int n = s.size() ; 
        int count = 0 ; 


        int i = 0 ; 
        int j = 0 ; 

        while(j < n){
            if(s[j] == '0'){
                while(j < n && s[j] != '1'){
                    j++ ;
                }
               
                i = j ;

               
            }
            if(s[j] == '1'){
                 count = (count + j - i +1 ) % MOD ;
            }
            
            j++ ;
        }
        return count ; 
        
    }
};