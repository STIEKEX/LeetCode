class Solution {
public:
    vector<int>dp ; 
    int n = 0 ; 
    int solve(int i , vector<int>&nums){
        if(i >= n) return 0 ; 

        if(dp[i] != INT_MIN) return dp[i] ; 

        int one = nums[i] - solve(i+1 , nums) ; 
        int two = INT_MIN ; 
        int three = INT_MIN ;
        if(i+1 < n){
           two =  nums[i] + nums[i+1] - solve(i+2 , nums) ; 
        }
        if(i+2 < n){
           three = nums[i] + nums[i+1] + nums[i+2] - solve(i+3  , nums) ; 
        }
        return dp[i] = max({one , two , three}) ; 
    }
    string stoneGameIII(vector<int>& stone) {
        n = stone.size() ; 

        dp.resize(n+1 , INT_MIN) ; 

         int val = solve(0 , stone) ; 

         if(val >0) return "Alice" ; 
         else if(val < 0) return "Bob" ; 
         
         return "Tie" ; 


        
    }
};