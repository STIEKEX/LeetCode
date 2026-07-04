class Solution {
public:
     int mn = INT_MAX ; 
     void dfs(int src , vector<vector<pair<int ,int>>>&adj , vector<bool>&seen ){
        
        if(seen[src] ) return  ;

        seen[src] = true ; 

        for(auto val : adj[src]){
            int v = val.first ; 
            int d = val.second ; 
            mn = min(d , mn) ; 
            dfs(v , adj , seen) ; 
            
        }
     }
    int minScore(int n, vector<vector<int>>& roads) {
           
          

           vector<vector<pair<int ,int>>>adj(n+1) ; 
           for(auto val : roads){
                int u = val[0] ; 
                int v = val[1] ; 
                int d = val[2] ; 

                adj[u].push_back({v ,d}) ; 
                adj[v].push_back({u ,d}) ; 
           }

           vector<bool>seen(n+1 , false) ; 

            dfs(1 , adj , seen) ; 
            return mn ;
           



    }
};