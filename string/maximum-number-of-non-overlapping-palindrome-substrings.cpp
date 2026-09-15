class Solution {
public:
    vector<int>dp  ;

    bool check(string s, int i , int j ){
        while(i < j ){
            if(s[i] != s[j]) return false ;
            i++ , j-- ; 
        }
        return true ;
    }
    int solve(int i , string s , int k){
        int n =s.size() ; 
        if(i >= n) return 0 ; 


        if(dp[i] != -1) return dp[i]  ;


        int ans = solve(i+1 , s , k) ; 

        for(int j = i+k-1 ; j<n ; j++){

            if(check(s , i , j)){
                ans = max(ans , 1 + solve(j+1 , s , k)) ; 
            }
        }
        return dp[i] = ans ;
    }
    int maxPalindromes(string s, int k) {
        int n = s.size() ; 
        dp.resize(n+1 , -1) ; 
       return  solve(0 , s , k) ; 
        
    }
};