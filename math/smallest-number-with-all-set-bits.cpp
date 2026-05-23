class Solution {
public:
    int smallestNumber(int n) {

        

        int digit = 2 ; 
        int power = 1;
        while(digit-1 < n ){
            digit = pow(2,power) ;
            power++ ;
            if(digit - 1 > n){

            }
        }
        return digit - 1 ;
        
    }
};