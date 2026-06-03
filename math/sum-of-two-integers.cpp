class Solution {
public:
    int getSum(int a, int b) {
        
        while(b != 0){
            int c = (a&b)<<1 ; 

            int a = a ^ b  ; 
            int b = c ;
        }
        return a  ;
    }
};