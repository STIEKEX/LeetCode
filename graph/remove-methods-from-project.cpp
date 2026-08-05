class Solution {
public:
    vector<bool>seen ; 
    bool is = false ;
    void dfs(int i , int n , int k , vector<vector<int>>&adj){
      if(seen[i]) return ; 

      seen[i] = true ; 

      for(int val : adj[i] ) {
        if(!seen[val]){
            dfs(val , n , k , adj) ; 
        }
        
       
      }
    }
    
  
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& in) {

        vector<vector<int>>adj(n) ; 
        seen.resize(n , false) ; 
        for(auto val : in){
            int u = val[0] ; 
            int v = val[1] ; 
            adj[u].push_back(v) ; 
            
        }

        dfs(k , n , k , adj) ; 
        
        for(auto val : in){
            int u = val[0] ; 
            int v = val[1] ; 

            if(!seen[u] && seen[v]){
                vector<int>ans ; 
                for(int i = 0 ; i<n ; i++){
                    ans.push_back(i) ; 
                }
                return ans ;
            }
        }
        vector<int>ans; 
        for(int i = 0 ; i<n ; i++){
            if(!seen[i]){
                ans.push_back(i) ; 
            }
        }
        return ans ;
       


        
        
    }
};