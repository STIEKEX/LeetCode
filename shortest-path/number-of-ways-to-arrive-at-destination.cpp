class Solution {
public:
    const int mod = 1e9 + 7 ; 

    
    int countPaths(int n, vector<vector<int>>& roads) {

        

        vector<vector<pair<int ,int>>>adj(n) ; 

        for(auto val : roads){
            int u = val[0] ; 
            int v = val[1]  ;
            int w = val[2] ; 

            adj[u].push_back({v,w}) ; 
            adj[v].push_back({u,w}) ; 
        }

        priority_queue<pair<long long  ,int> , vector<pair<long long ,int>> , greater<pair<long long ,int>>>pq ; 
        vector<long long >dis(n , LLONG_MAX) ; 
        pq.push({0 , 0}) ; 
        dis[0] = 0 ; 

        while(pq.size()){
            int u = pq.top().second ; 
            long long cost = pq.top().first ; 


            pq.pop() ; 
            if(cost > dis[u]) continue ;

            for(auto val : adj[u]){
                int v = val.first ; 
                int w = val.second ; 
                if(w + cost < dis[v]){
                    dis[v] = w + cost ; 
                    pq.push({dis[v] , v}) ; 
                }
            }
        }
        int mn = dis[n-1] ; 

        vector<long long>ways(n , 0) ; 

        ways[0] = 1 ; 

        vector<int>order(n) ; 
        for(int i = 0 ; i<n ; i++){
            order[i] = i ; 
        }

        sort(order.begin() , order.end() , [&](int a ,int b){return dis[a] < dis[b];}) ; 

        for(int u : order){

            for(auto val : adj[u]){
                if(val.second + dis[u] == dis[val.first]){
                    ways[val.first] = (ways[u] + ways[val.first]) % mod ; 
                }
            }
        }
        return ways[n-1] ;  

       
        
    }
};