class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<vector<pair<int ,int>>>adj(n+1) ;
        
        for(auto val : times){
            int u = val[0] ;
            int v = val[1] ; 
            int w = val[2] ; 
            
            adj[u].push_back({v , w}) ;
        }
        
        priority_queue<pair<int ,int> , vector<pair<int ,int>> , greater<pair<int ,int>>>pq; 
        vector<int>dis(n+1 , INT_MAX) ; 
        
        pq.push({0 , k}) ; 
        dis[k] = 0 ; 
        
        while(pq.size() > 0){
            int wt = pq.top().first ;
            int node = pq.top().second ; 
            pq.pop() ; 
            
            for(auto  val : adj[node]){
                int v = val.first ;
                int w = val.second ; 
                
                if(dis[node] + w < dis[v]){
                    dis[v] = dis[node] + w ; 
                    pq.push({dis[v] , v}) ; 
                }
            }
        }
        int mx = INT_MIN ; 
        for(int i = 1 ; i<=n ; i++){
            if(dis[i] == INT_MAX) return -1 ; 
            mx = max(mx , dis[i]) ; 
        }
        return mx;
        
        
    }
};