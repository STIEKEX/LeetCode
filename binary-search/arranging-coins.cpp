class Solution {
public:
    int arrangeCoins(int n) {
        
       int i = 1 ;
       while(n != 0){
        if(i > n){
            break ;
        }
        else{
            
            n = n-i ;
            i++ ; 

        }
         
       }
       return i -1 ; 
    }
};