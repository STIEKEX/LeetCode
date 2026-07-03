class Solution {
public:
   
    int ans = INT_MIN ; 
    void dfs(int src , vector<vector<pair<int ,int>>>&adj , vector<bool>&online , long long k , int sum , int mn ){
        
        if(!online[src] || sum > k  )return ;
        if(src == adj.size() -1) {
           ans = max(ans , mn) ; 
           
        }
        for(auto val : adj[src]){
            int v = val.first ; 
            int c = val.second ;
             
            
            dfs(v , adj , online , k, sum + c , min(mn ,c) ) ; 
            
     
        }
    }   
    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {

            int n = online.size() ; 

            vector<vector<pair<int ,int>>>adj(n) ; 

            for(auto val : edges){
                int u  = val[0] ; 
                int v = val[1] ; 
                int c = val[2] ; 

                adj[u].push_back({v , c}) ;
            }
            dfs(0 , adj , online , k , 0 , INT_MAX) ; 
            if(ans == INT_MIN) return -1 ;
           return ans ;

            



    }
};