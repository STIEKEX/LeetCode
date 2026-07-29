class Solution {
public:
    unordered_set<string>st ; 
    vector<int>dp  ;
    bool solve(int i , string& s ){
        if(i == s.size()) return true ;

        if(dp[i] != -1) return dp[i] ; 
        string temp = "" ; 
        for(int j = i ; j<s.size() ; j++){
            temp += s[j] ; 

            if(st.find(temp) != st.end() && solve(j+1 , s )){
                return dp[i] = true ;
            }
        }
        return dp[i] = false ;
    }
    bool wordBreak(string s, vector<string>& d) {
       
        for(string val : d){
            st.insert(val) ; 
        }
        int n = s.size() ; 
        dp.resize(n+1 , -1) ; 
         return solve(0 , s ) ; 
        
       
        
    }
};