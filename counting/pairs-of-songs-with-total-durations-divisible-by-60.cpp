class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {

       vector<int>freq(60 , 0) ; 
       int count = 0 ;
        for(int val : time){
            int rem = val % 60 ; 
            if(rem == 0){
                count++ ; 
                continue ; 
            }

            int need = (60 - rem) ; 

            count += freq[need] ; 
            freq[rem]++ ; 
            
        }
        return count ;
        
    }
};