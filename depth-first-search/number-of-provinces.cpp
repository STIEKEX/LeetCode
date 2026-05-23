class Solution {
public:
    void dfs(int i , vector<vector<int>>&adj, vector<bool>&seen){

        if(seen[i]) return ; 

        seen[i] = true ; 

        for(int val : adj[i]){
            if(!seen[val]){
                dfs(val , adj , seen) ; 
            }
        }
    }
    int findCircleNum(vector<vector<int>>& grid) {

        int n = grid.size() ; 

        vector<vector<int>>adj(n) ; 

        vector<bool>seen(n) ; 

        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                
                if(grid[i][j] == 1 && i!=j){

                    adj[i].push_back(j) ; 
                    adj[j].push_back(i) ; 
                }
            }
        }

        int count = 0 ; 
        
        for(int i = 0 ; i<n ; i++){

            if(!seen[i]){
                count++ ; 
                dfs(i , adj , seen) ; 
            }
        }
        return count ; 
        
    }
};