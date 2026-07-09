class Solution {
public:
    bool solve(int i , vector<int>&nums){
        
        if(i == nums.size()-1) return true ;

        for(int j = 1 ; j<=nums[i] ; j++){
            if(i+j < nums.size()){

                if(solve(i+j , nums)) return true ;
            }
        }
        return false ;
    }
    bool canJump(vector<int>& nums) {
        return solve(0 , nums) ; 
        
    }
};