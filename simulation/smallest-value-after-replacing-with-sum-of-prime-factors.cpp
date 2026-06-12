class Solution {
public:
    int smallestValue(int n) {
        if(n == 4) return n ; 
        

       while(true){
        int o = n ; 
        int sum = 0 ;
        for(int i = 2 ; i*i <=n ; i++){
            while(n % i == 0){
                sum += i ; 
                n = n/i ; 
            }
        }
        if(n > 1){
            sum += n ; 
        }
        if(sum == o) return sum  ; 
        n = sum ; 
       
       }
       return -1 ; 
        
    }
};