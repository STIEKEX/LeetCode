class Solution {
public:
    bool checkDivisibility(int n) {


        long long  p = 1 ; 
        long long  sum = 0 ; 
       int temp  = n ; 
        while(n != 0 ){
            long long rem = n%10 ; 
            p *= rem  ;
            sum += rem ; 
            n = n/10  ;
        }
        return temp % (p + sum) == 0 ; 
        
        
    }
};