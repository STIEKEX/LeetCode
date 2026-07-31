class Solution {
public:
    vector<vector<vector<int>>>dp ; 
    int countZero(string str){
        int cnt = 0 ;
        for(char ch : str){
            if(ch == '0')cnt++ ; 
        }
        return cnt ;
    }
    int countOne(string str){
        int cnt = 0 ; 
        for(char ch : str){
            if(ch == '1')cnt++ ; 
        }
        return cnt ;
    }
    int solve(int i , vector<string>&strs , int m , int n){
        if(m == 0 && n == 0) return 0 ; 
        if(i == strs.size()) return 0 ; 
        if(dp[i][m][n] != -1)return dp[i][m][n] ; 
        int taken = 0;
        int one = countOne(strs[i]) ; 
        int zero = countZero(strs[i]) ; 
        if(one <= n && zero <= m){
            taken = max(1 + solve(i+1 , strs , m-zero , n-one) , solve(i+1 , strs , m , n)) ; 
        }
        int notTaken = solve(i+1 , strs , m , n) ; 
        return dp[i][m][n] = max(taken , notTaken) ; 
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        int size = strs.size() ; 
       dp.resize(size+1 , vector<vector<int>>(m+1 ,vector<int>(n+1 , -1))) ; 
       return  solve(0 , strs , m , n) ; 
        
    }
};