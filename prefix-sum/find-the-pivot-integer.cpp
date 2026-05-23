class Solution {
public:
    int pivotInteger(int n) {
        int currsum = 0 ;
        int prevsum = 0 ; 
        int totalsum = n*(n+1)/2 ;
        for(int i=1 ; i<=n ; i++){
            prevsum = currsum  ;
            currsum += i ;
            if(totalsum - prevsum == currsum){
                return i ;
            }
            
        }
        return -1 ;
    }
};