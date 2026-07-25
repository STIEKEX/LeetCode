class Solution {
public:
    int maxProduct(int n) {
        int x = 0 ;
        int y = 0 ; 
        while(n != 0){
            int rem = n % 10 ; 
            if(rem > x){
                y = x ; 
                x = rem ; 
            }
            else if(rem > y){
                y = rem ; 
            }
            n = n/10 ; 
        }
        return x * y ; 
    }
    
};