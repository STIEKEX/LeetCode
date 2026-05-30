class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {

       vector<int>freq(60 , 0) ; 
       int count = 0 ;
        for(int val : time){
           int rem = val % 60 ; 

            int need = (60 - rem)% 60  ; 

            count += freq[need] ; 
            freq[rem]++ ; 
            
        }
        return count ;
        
    }
};