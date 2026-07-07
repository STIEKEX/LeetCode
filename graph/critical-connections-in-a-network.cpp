class Solution {
public:
    int time ; 
    vector<int>dt , low  ; 
    

    void dfs(int u , int parU , vector<vector<int>>&adj,vector<vector<int>>&ans  ){
        dt[u] = low[u] = ++time ; 

        for(int val : adj[u]){

            if(dt[val] == -1){
                dfs(val , u , adj ,ans) ; 
                low[u] = min(low[u] , low[val]) ; 

                if(low[val] > dt[u]){
                    ans.push_back({u , val}) ; 
                }
            }
            else if(val != parU){
                low[u] = min(low[u] , dt[val]) ; 
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>>adj(n)  ;

        for(auto val : connections){
            int u = val[0] ;
            int v = val[1] ; 

            adj[u].push_back(v) ; 
            adj[v].push_back(u) ; 
        }
        dt.resize(n , -1) ; 
        low.resize(n) ; 
        vector<vector<int>>ans ; 
        for(int i = 0 ; i<n ; i++){
            if(dt[i] == -1){
                dfs(i , -1 , adj ,ans ) ; 
            }
        }
        return ans ;
        
    }
};