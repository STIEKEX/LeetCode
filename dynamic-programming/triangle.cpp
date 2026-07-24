class Solution {
public:
    vector<vector<int>>dp ; 
    int solve(int i , int idx , vector<vector<int>>&t){
        if(idx == t.size()) return 0 ; 

        int left = solve(i , idx+1 , t) ; 
        int right = solve(i+1  , idx + 1 , t) ; 

        return min(left + t[idx][i] , right+t[idx][i]) ; 
    }
    int minimumTotal(vector<vector<int>>& t) {
        int n = t.size() ; 

        return solve(0 , 0 , t) ; 
       


        
        
    }
};