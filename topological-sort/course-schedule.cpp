class Solution {
public:
        bool dfs(int src , vector<vector<int>>& adj , vector<bool>& seen , vector<bool>& rec){
            seen[src] = true  ;
            rec[src] = true ; 
            for(int val : adj[src]){
                if(!seen[val]){
                    if(dfs(val , adj , seen , rec)) return true  ; 
                }
                else if(rec[val]){
                    return true; 
                }
            }
            rec[src] = false ;
            return false; 
        }
    bool canFinish(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n) ; 

        for(auto val : edges){
            int u = val[0] ; 
            int v = val[1] ; 
            adj[v].push_back(u) ; 
        }

        vector<bool>seen(n , false) ; 
        vector<bool>rec(n ,false) ; 
       for(int i =0  ; i<n ; i++){
        if(!seen[i]){
            if(dfs(i , adj , seen , rec)) return false; ;
        }
       }
       return true ;

        
        
    }
};