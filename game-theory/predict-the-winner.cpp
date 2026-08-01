class Solution {
public:
    vector<vector<int>>dp ; 
    int solve(int i , int j , vector<int>&nums){

        if(i == j){
            return nums[i] ; 
        }
        if(dp[i][j] != -1 ) return dp[i][j] ;

        int leftMost = nums[i] - solve(i+1 , j , nums) ;
        int rightMost = nums[j] - solve(i , j-1 , nums) ; 
        return max(leftMost , rightMost) ;  
    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size()  ;
        dp.resize(n , vector<int>(n , -1)) ; 

        return solve(0 , n-1  , nums) >= 0 ; 
        
    }
};