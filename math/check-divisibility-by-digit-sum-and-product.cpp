class Solution {
public:
    bool checkDivisibility(int n) {


        long long  p = 1 ; 
        long long  sum = 0 ; 
       
        while(n != 0 ){
            long long rem = n%10 ; 
            p *= rem  ;
            sum += rem ; 
            n = n/10  ;
        }
        return n % (p + sum) == 0 ; 
        
        
    }
};