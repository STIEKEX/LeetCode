class Solution {
public:
    vector<vector<int>>paths ; 
    vector<int>arr; 
    void dfs(int src , vector<vector<pair<int ,int>>>&adj , vector<bool>&online , long long k , int sum  ){
        
        if(!online[src] || sum > k  )return ;
        if(src == adj.size() -1) {
           paths.push_back(arr) ; 
           return ;
           
        }
        for(auto val : adj[src]){
            int v = val.first ; 
            int c = val.second ;
            
            arr.push_back(c)  ;
            dfs(v , adj , online , k, sum + c ) ; 
            arr.pop_back() ;
     
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
            dfs(0 , adj , online , k , 0) ; 

            vector<int>ans ; 

            for(auto val : paths){
                int mn  = INT_MAX ; 
                for(int x : val){
                    mn = min(x , mn) ; 
                }
                ans.push_back(mn) ; 
            }
            int mx = INT_MIN ; 

            for(int val : ans){
                mx = max(val , mx) ; 
            }
            if(mx == INT_MIN) return -1; 
            return mx ;

            



    }
};