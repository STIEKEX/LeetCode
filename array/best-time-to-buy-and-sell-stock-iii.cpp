class Solution {
public:
    vector<vector<vector<int>>>dp ;  
    vector<int>p ; 

    int solve(int i , int b , int t){
        if(i == p.size())return 0 ; 

        if(dp[i][b][t] != -1) return dp[i][b][t] ;

        
        if(b){
            int taken = 0 ;
            if(t < 2){
                taken = -p[i] + solve(i+1 , 0 , t)  ; 

            }
            int notTaken = solve(i+1 , 1 , t) ; 
            return dp[i][b][t] = max(taken , notTaken) ; 

           
        }
        return dp[i][b][t] = max(p[i] + solve(i+1 , 1 , t+1) , solve(i+1 , 0 , t)) ; 


        
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ; 
        dp.resize(n , vector<vector<int>>(2 , vector<int>(3 ,-1)));
        p = prices ;  

        return solve(0 , 1 , 0) ; 

        
    }
};