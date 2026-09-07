class Solution {
public:
    
    int solve(string& s , string& t , int i , int j){

        if(j == t.size()) return 1 ; 

        if(i == s.size()) return 0 ; 
        
        if(s[i] == t[j]){

            int take = solve(s , t , i+1 , j+1) ; 
            int notTaken = solve(s, t , i+1 , j) ; 

            return take + notTaken ; 

        }

        return solve(s , t , i+1 , j) ; 
    }
    int numDistinct(string s, string t) {
        
        return solve(s , t , 0 , 0) ; 
        
    }
};