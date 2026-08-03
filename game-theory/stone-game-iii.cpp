class Solution {
public:
    string stoneGameIII(vector<int>& stone) {
         int n = stone.size() ; 

        vector<int>dp(n+3 , 0) ; 

        for(int i = n-1 ; i>=0 ; i--){

            int first = stone[i] - dp[i+1] ; 
            int second = INT_MIN  ;
            int third = INT_MIN ; 
            if(i+1 < n){
                second = stone[i] + stone[i+1] - dp[i+2] ; 
            }
            if(i+2 < n){
                third = stone[i] + stone[i+1] + stone[i+2] - dp[i+3] ; 
            }
            dp[i] = max({first , second , third}) ;

              
        }

        if(dp[0] > 0) return "Alice" ; 
        else if(dp[0
        ] < 0) return "Bob" ; 
        return "Tie" ; 
        
    }
};