class Solution {
public:
    int minReorder(int n, vector<vector<int>>& grid) {

        // int n =  grid.size() ; 

        vector<vector<pair<int ,int>>>adj(n) ; 

        for(auto val : grid){
            int u = val[0] ;
            int v = val[1] ; 

            adj[u].push_back({v,1}) ; 
            adj[v].push_back({u,0}) ; 
        }

        

    //     for(auto val : grid){
    //         int u = val[0] ; 
    //         int v = val[1] ; 
    //         adj[u].push_back(v) ; 
    //     }
    //    int count = 0 ;
    //    vector<int>out(n, 0);
    //    for(int i = 0 ; i<n ; i++){
    //     out[i] = adj[i].size() ; 
    //    }
    //    if(out[0] == 0) return 0 ;

       vector<bool>seen(n , false) ; 
        int count = 0 ;

        queue<int>q ; 
        q.push(0) ; 
        seen[0] = true;  

        while(q.size() > 0){
            int curr = q.front() ;
            q.pop() ; 

            for(auto val : adj[curr]){
                int node = val.first ; 
                int cost = val.second ; 
                
                if(!seen[node]){
                    seen[node] = true ;
                    count += cost ; 
                    q.push(node) ; 
                }
            }

            
        }
        return count ;
        
    }
};