class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

            vector<vector<pair<int ,int>>>adj(n) ; 

            for(auto val : flights){
                int  u = val[0] ; 
                int v = val[1] ; 
                int w = val[2] ; 

                adj[u].push_back({v, w}) ; 
            } 

            vector<int>dis(n , INT_MAX) ; 

           queue< pair< pair<int ,int> , int>>q ; 

           q.push({{src , 0} , 0}) ; 
           dis[src] = 0 ; 


           while(q.size()){
                int u = q.front().first.first ; 
                int wt = q.front().first.second ; 

                int stop = q.front().second ; 
                q.pop() ; 

                if(stop > k) continue ; 

                for(auto val : adj[u]){
                   int v = val.first ; 
                   int w = val.second ; 

                    if(w + wt < dis[v]){
                        dis[v] = w + wt ; 
                        q.push({{v , w+wt} , stop + 1}) ;
                    }
                }
           }
           if(dis[dst] == INT_MAX) return -1 ; 
           return dis[dst] ; 

        
    }
};