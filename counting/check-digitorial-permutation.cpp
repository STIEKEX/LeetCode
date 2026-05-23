class Solution {
public:
        int fact(int n){
            int val = 1 ; 
            for(int i = 1 ;i <=n ; i++){
                val = val * i ;
            }
            return val ;
        }
    bool isDigitorialPermutation(int n) {
        string str = to_string(n) ;
        int sum = 0 ;
        sort(str.begin() , str.end()) ;
        for(int i = 0 ; i < str.size() ; i++){
                sum += fact(str[i] - '0') ;
            }

            if(sum == n){
                return true ;
                
            }

        
        
        
        
           do{ int val = stoi(str) ;
           if(str[0] == '0') continue ;
            int sum = 0 ;
            for(int i = 0 ; i < str.size() ; i++){
                sum += fact(str[i] - '0') ;
            }

            if(sum == val){
                return true ;
                
            }
           }
           while(next_permutation(str.begin() , str.end())) ;

        return false ;
        
    }
};