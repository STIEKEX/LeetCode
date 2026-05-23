class Solution {
public:
        bool powerofTwo(int n, long long val){
            if(val == n){
                return true ;
            }
            val *= 2 ; 
            if(val > n){
                return false ;
            }

            return powerofTwo(n , val) ;
        }
    bool isPowerOfTwo(int n) {
        if(n == 1 ){
            return true ;
        }
        if(n <=0){
            return false ;
        }
        // if( n == 0){
        //     return true ;
        // }
        return powerofTwo(n , 2) ;
    }

        
};