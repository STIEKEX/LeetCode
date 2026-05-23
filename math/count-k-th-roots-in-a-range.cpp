class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        
        // int count = 0 ; 
        // if(k == 1) return r - l + 1 ; 
        // for(int i = 0 ; i<=sqrt(1e9) ; i++){
        //     int y = pow(i , k) ; 
        //     if(y > r) break ; 
        //     if(y >= l && y<=r) count++ ; 
        // }
        // return count ;



        int count = 0 ;

        if(k == 1 ) return r - l + 1 ; 

        for(int i = 0 ; i<=sqrt(1e9) ; i++){
            long long val = 1 ;

            for(int j = 0 ; j<k ; j++){
                val *= i ;
            }
            if(val > r) return count ; 
            if(val >=l && val <= r) count++ ; 
        }
        return count ;
    }
};