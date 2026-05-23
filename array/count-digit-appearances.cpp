class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {

        int ans = 0 ;

        for(int val : nums){

            while(val != 0){
                int rem = val %10 ; 
                if(rem == digit) ans++ ; 

                val = val/10 ; 
            }
        }
        return ans ;
        
    }
};