class Solution {
public:
        bool dfs(int src , int des ,vector<vector<int>>& adj , vector<bool>&seen ){
            if(src == des) return true ; 
            seen[src] = true ; 
            for(int val : adj[src]){
                if(!seen[val]){
                    if(dfs(val , des , adj , seen)) return true ; 
                }
            }
            return false ;
        }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        int m = edges.size() ; 
        if(m == 0) return true ; 
        vector<vector<int>>adj(n) ; 
        for(auto e : edges){
            adj[e[0]].push_back(e[1]) ; 
            adj[e[1]].push_back(e[0]) ; 
        }
        vector<bool>seen(n , false) ; 
    
        return dfs(source , destination  , adj , seen) ; 


        
    }
};