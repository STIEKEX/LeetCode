class Solution {
public:
    vector<vector<int>>dp ; 
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

        int taken = 0;
        int one = countOne(strs[i]) ; 
        int zero = countZero(strs[i]) ; 
        if(one <= n && zero <= m){
            taken = max(1 + solve(i+1 , strs , m-zero , n-one) , solve(i+1 , strs , one , zero)) ; 
        }
        int notTaken = solve(i+1 , strs , m , n) ; 
        return max(taken , notTaken) ; 
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        dp.resize(m , vector<int>(n , -1)) ; 
       return  solve(0 , strs , m , n) ; 
        
    }
};