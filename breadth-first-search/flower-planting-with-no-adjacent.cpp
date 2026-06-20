class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
       
        vector<vector<int>>adj(n+1) ; 

        for(auto val : paths){
            
            int u = val[0]  ;
            int v = val[1] ; 
            adj[u].push_back(v) ; 
            adj[v].push_back(u) ; 
        }

        vector<int>ans(n+1 , 0) ; 
        // vector<bool>color(4+1 ,false) ; 
        for(int i = 1 ; i<=n ; i++){
            
            vector<bool>color(5 , false) ; 

            for(auto val : adj[i]){
                color[ans[val]] = true ; 
            }

            for(int j =1 ; j<=4 ; j++){
                if(color[j] == false){
                    ans[i] = j ; 
                    break ; 
                }
            }
        }
        ans.erase(ans.begin()) ; 
        return ans; 

        
    }
};