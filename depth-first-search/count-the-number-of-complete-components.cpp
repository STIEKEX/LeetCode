class Solution {
public:
    vector<vector<int>>adj  ;
    vector<bool>seen ; 
    int node ;
    int totalEdges ;
    
    void dfs(int i){
        seen[i] = true ; 
        node++ ; 
        totalEdges += adj[i].size() ; 

        for(int val : adj[i]){
            if(!seen[val]){
                dfs(val) ; 
            }
        }
        
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {

        adj.resize(n) ; 
        seen.resize(n , false) ; 

        for(auto val : edges){
            int u = val[0] ; 
            int v = val[1] ; 

            adj[u].push_back(v) ; 
            adj[v].push_back(u) ; 
        }

        
        int ans = 0 ;
        for(int i = 0 ; i<n ; i++){
            if(!seen[i]){
                node = 0; 
                totalEdges = 0;
                dfs(i) ; 

                int x = node*(node-1)/2 ; 
                if(x == totalEdges/2){
                    ans++ ; 
                }
            }

        }
        return ans ;
        
    }
};