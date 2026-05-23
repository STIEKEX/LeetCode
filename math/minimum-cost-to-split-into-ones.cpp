class Solution {
public:
    int minCost(int n) {

        int product = 1 ; 
        int ans = 0 ;

        while(n != 1){

            int a = 1 ; 
            int b = n-1 ; 

            int sum = a + b ;
            product = a * b ;
            ans += product ;
            n = product ;
        }
        return ans ;
        
    }
};