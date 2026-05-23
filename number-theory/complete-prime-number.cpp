class Solution {
public:
    bool completePrime(int num) {
        if(num == 1) {
            return false ;
        }
        
        string str = to_string(num) ;
        int size = str.size() ; 
        
        
        
        int prefix = 0 ;
        
        for(char val : str){
            
             prefix = prefix * 10+ (val - '0') ;
            if(prefix == 1)return false ;
            
            for(int i = 2; i<prefix ; i++){
                if(prefix % i == 0){
                    return false ;
                }
            }
            
           
        }


        int suffix = 0 ; 
        int power = 1 ;
        for(int i = size -1 ; i>=0 ; i--){
            
            suffix = (str[i] -'0') * power + suffix ;
            if(suffix == 1)return false ;
            
            for(int i = 2 ; i<suffix ; i++){
                if(suffix % i == 0){
                    return false ;
                }
            }
            power *= 10 ;
           
        }

        return true ;
        
        
        
        

        
    }
};