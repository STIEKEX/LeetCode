class Solution {
public:
    int  solve(int n , vector<int>&arr , vector<int>&dp){
        if(n < 0) return 0 ; 
        if(dp[n] != -1) return dp[n] ; 

        int taken =   max(arr[n] + solve(n-2 , arr ,dp) , solve(n-1 , arr ,dp)) ;
        
        return dp[n] = taken ; 
        
    }
    int rob(vector<int>& nums) {
        int n = nums.size() ; 
        if(n == 1) return nums[0] ;
        vector<int>a , b ; 

        for(int i = 0 ; i<nums.size()-1 ; i++){
            a.push_back(nums[i]) ;

        }
        for(int i = 1 ; i<nums.size() ; i++){
            b.push_back(nums[i]) ; 
        }
        vector<int> dp1(a.size(), -1);
        vector<int> dp2(b.size(), -1);

        int v1 = solve(a.size() - 1, a, dp1);
        int v2 = solve(b.size() - 1, b, dp2);
       
       
        return max(v1 , v2)  ;
        
    }
};