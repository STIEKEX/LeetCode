class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int n = stones.size() ; 
        if(n == 1 )return false ;

        int sum = 0 ;
        for(int val : stones){
            sum += val ;
        }
        if(sum % 3 == 0 && n % 2 == 1){
            return false ;
        }
        if(sum % 3 == 0 && n % 2 == 0) {
            return true ;
        }
        return false ;


        // if the sum of array is mod 3 and n is odd answer is alway false ; 
        // and is n is even and sum is mod 3 alice win : 
    }
};