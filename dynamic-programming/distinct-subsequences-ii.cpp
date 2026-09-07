class Solution {
public:
    const int mod = 1e9 + 7 ; 
    vector<int>dp ; 
    unordered_set<string>m ; 
    void solve(string& s , int i , string& curr ){
        if(i == s.size()){
            m.insert(curr) ; 
            return ;
        }; 


        // if(dp[i] != -1) return dp[i] ;


        solve(s , i+1 , curr) ; //skip ; 
        curr.push_back(s[i]) ;  
        solve(s , i+1 , curr) ; 

        curr.pop_back() ; 
        
    }
    int distinctSubseqII(string s) {

        string curr = "" ; 

        solve(s , 0 , curr) ; 
        int ans = m.size()%mod; 
        return ans-1; 


        
    }
};