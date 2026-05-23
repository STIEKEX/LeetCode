class Solution {
public:
    int hammingWeight(int n) {
       
        // long long pow = 1 ;
        int count = 0 ;
        while(n !=0){
            int rem = n %2 ; 
            if(rem == 1) {
                count++ ; 
            }
            
           
            n = n/2 ;
            // if(pow>INT_MAX/10){
            //     pow = pow/10;

            // }
            // pow = pow * 10 ;

        }
        return count ;

            
        
        
    }
};