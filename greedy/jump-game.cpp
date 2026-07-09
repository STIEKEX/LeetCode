class Solution {
public:
    vector<int>dp ; 
    bool solve(int i , vector<int>&nums){
        
        if(i == nums.size()-1) return true ;
        if(dp[i] != -1) return dp[i] ; 
        for(int j = 1 ; j<=nums[i] ; j++){
            if(i+j < nums.size()){

                if(solve(i+j , nums)){
                    return dp[i] = true ;
                }
            }
        }
        return dp[i] = false ;
    }
    bool canJump(vector<int>& nums) {
        dp.resize(nums.size() +1 , -1) ;  
        return solve(0 , nums) ; 
        
    }
};