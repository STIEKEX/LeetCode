class Solution {
public:
    bool isHappy(int n) {
        int sum = n , count = 0 ;
        while(true){
            n = sum ; 
            sum = 0 ;
            while(n!=0){
                int rem = n%10 ; 
                sum += (rem*rem) ; 
                n = n/10 ;
                count++ ; 

            }
            if(sum == 1){
                return true ;
            }
            if(count>20){
                return false ; 
            }
        }
        
        
    }
};