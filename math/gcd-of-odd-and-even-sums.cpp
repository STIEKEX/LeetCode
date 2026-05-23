class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int sumEven = n*(n+1)  ;
        int sumOdd = n*n ; 
        int gcd = 1 ;
        if(sumEven == 0){
            gcd = sumOdd ;
        }
        if(sumOdd== 0){
            gcd = sumOdd ;
        }
        if(sumOdd == sumEven){
            gcd = sumOdd ;
        }

        for(int i =1 ; i<min(sumEven, sumOdd) ; i++){
            if(sumEven%i==0 && sumOdd %i==0){
                gcd = i ; 
            }
        }
        return gcd ;
        
        
      
        
    }
};