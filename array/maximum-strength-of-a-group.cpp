class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        long long ans = 1 ; 
        int n = nums.size() ; 

        int zero = 0 ; 
        int neg = 0 ; 
        int nonz= 0 ; 
        int mxng = INT_MIN ; 
        for(int val : nums){

            if(val != 0){
                ans *= val ; 
                nonz++ ; 
            }
            if(val == 0) zero++ ; 

            if(val < 0){
                neg++ ; 
                mxng = max(mxng , val) ; 
            }

        }
        
        if(nonz == 0 && neg == 0 ) return 0 ; 

        if(nonz == 1 && zero > 0 && neg == 1) return 0 ;

        if(neg % 2 == 1){
            ans = ans / mxng ; 

        } 
        return ans ;







    }
};