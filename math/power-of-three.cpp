class Solution {
public:
        bool powerofThree(int n , long long &val){
             if(val == n){
                return true ;
            }
            val *= 3 ;
            if(val > n){
                return false ;
            }
           
            
            return powerofThree(n , val) ;
        }
    bool isPowerOfThree(int n) {
        if(n == 1){
            return true ;
        }
        if(n < 3){
            return false ;
        }
        long long val = 3 ;
        return powerofThree(n , val) ;

        


        
    }
};