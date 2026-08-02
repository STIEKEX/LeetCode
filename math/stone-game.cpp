class Solution {
public:
    vector<vector<int>>dp ; 
    int solve(int i  , int j , vector<int>&p){
        if(i == j) return p[i] ; 
        if(dp[i][j] != -1) return dp[i][j] ; 
        int left = p[i] - solve(i+1 , j , p) ;
        int right = p[j] - solve(i , j-1 , p)  ;

        return dp[i][j] = max(left , right)  ;
    }
    bool stoneGame(vector<int>& piles) {
        int n = piles.size() ; 
        dp.resize(n+1 ,vector<int>(n+1 , -1)) ; 

        return solve(0 , n-1 , piles) >= 0 ; 
        
    }
};