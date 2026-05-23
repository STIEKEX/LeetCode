class Solution {
public:
    int countTriples(int n) {
        int count = 0 ; 
        for(int i = 1 ; i<=n ; i++){
            for(int j=1 ; j<=n ; j++){
                int c1 = i*i + j*j ;
                int c2 = sqrt(c1) ;
                if(c2*c2 == c1 &&c2<=n){
                    count++ ;
                }
            }
        }
        return count ;
        
    }
};